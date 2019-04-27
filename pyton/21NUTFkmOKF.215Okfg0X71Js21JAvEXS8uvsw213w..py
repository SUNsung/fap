
        
            def load(self):
        try:
            session_data = self._cache.get(self.cache_key)
        except Exception:
            # Some backends (e.g. memcache) raise an exception on invalid
            # cache keys. If this happens, reset the session. See #17810.
            session_data = None
        if session_data is not None:
            return session_data
        self._session_key = None
        return {}
    
    
class BaseSessionManager(models.Manager):
    def encode(self, session_dict):
        '''
        Return the given session dictionary serialized and encoded as a string.
        '''
        session_store_class = self.model.get_session_store_class()
        return session_store_class().encode(session_dict)
    
        if section is not None:
        if section not in sitemaps:
            raise Http404('No sitemap available for section: %r' % section)
        maps = [sitemaps[section]]
    else:
        maps = sitemaps.values()
    page = request.GET.get('p', 1)
    
    
def display_temp(hass: HomeAssistant, temperature: float, unit: str,
                 precision: float) -> float:
    '''Convert temperature into preferred units/precision for display.'''
    temperature_unit = unit
    ha_unit = hass.config.units.temperature_unit