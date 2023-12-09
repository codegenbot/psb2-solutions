prices = list(map(float, input().split()))
n = len(prices)
discounts = list(map(float, input().split()))

total_price = sum(price * (1 - (discount / 100)) for price, discount in zip(prices, discounts))
print(total_price)