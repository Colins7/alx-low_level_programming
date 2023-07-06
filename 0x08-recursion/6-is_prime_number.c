/**
 * is_divisible - checks if a number is divisble by a divisor
 * @n: the input number
 * @divisor: the divisor
 *
 * Return: 1 if n is divisible by a divisor, 0 otherwise
 *
 */

int is_divisible(int n, int divisor)
{
if (divisor == 1)
return (0);
if (n % divisor == 0)
return (1);

return (is_divisible(n, divisor - 1));
}

/**
 * is_prime_helper - function that checks the primality of a number
 * @n: tje input number
 * @divisor: the divisor
 *
 * Return: 1 if n is prime, 0 otherwise
 */

int is_prime_helper(int n, int divisor)
{
if (n <= 1)
return (0);
if (divisor == 1)
return (1);
if (is_divisible(n, divisor))
return (0);

return (is_prime_helper(n, divisor - 1));
}

/**
 * is_prime_number - checks if a number is prime
 * @n: the input number
 *
 * Return: 1 if n is prime, 0 otherwise
 *
 */

int is_prime_number(int n)
{
return (is_prime_helper(n, n / 2));
}
