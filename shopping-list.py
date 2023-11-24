prices = list(map(float, input().split()))
discounts = list(map(float, input().split()))

total_price = round(sum(price * (1 - discount / 100) for price, discount in zip(prices, discounts[::-1])), 2)
print(total_price)