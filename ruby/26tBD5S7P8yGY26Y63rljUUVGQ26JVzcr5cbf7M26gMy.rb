
        
          # True if a {Formula} is being built with a specific option
  # (which isn't named `with-*` or `without-*`).
  # @deprecated
  def include?(name)
    @args.include?('--#{name}')
  end
    
          Find.prune if @f.skip_clean? path
    
            def run
          UI.puts('$CACHE_ROOT: #{@cache.root}') if @short_output
          if @pod_name.nil? # Print all
            @cache.cache_descriptors_per_pod.each do |pod_name, cache_descriptors|
              print_pod_cache_infos(pod_name, cache_descriptors)
            end
          else # Print only for the requested pod
            cache_descriptors = @cache.cache_descriptors_per_pod[@pod_name]
            if cache_descriptors.nil?
              UI.notice('No cache for pod named #{@pod_name} found')
            else
              print_pod_cache_infos(@pod_name, cache_descriptors)
            end
          end
        end
    
      context 'called with one style' do
    it 'applies same style to all sides' do
      rule = 'border-style: solid'
    
          expect('.padding-explicit').to have_rule(rule)
    end
  end