n = int(input())
prices = list(map(float, input().split()))
discounts = list(map(float, input().split()))

total_price = sum(price * (1 - (discount / 100)) for price, discount in zip(prices, discounts), 0.0)
total_price = round(total_price, 2)
print(total_price)