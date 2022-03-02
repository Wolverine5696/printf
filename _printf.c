int printf(const char *format, ...)
{
	int raz;
	va_list abc;

	va_start(abc, format);
	if (format == NULL)

		raz = charformat(format, abc);

	va_end(abc);
	return(raz);
}
