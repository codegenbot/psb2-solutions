prices = []
discounts = []

n = int(input())
prices = list(map(float, input().split()))

m = int(input())
discounts = list(map(float, input().split()))

total_price = round(sum(price - (price * discount / 100) for price, discount in zip(prices, discounts)), 2)
print(total_price)