
        
            ret = route.slice(:location, :label)
    ret[:full_location] = 'adminPlugins.#{ret[:location]}'
    ret
  end