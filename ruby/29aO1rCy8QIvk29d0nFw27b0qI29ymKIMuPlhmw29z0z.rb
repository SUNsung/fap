
        
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
    
          def initialize(argv)
        @update = argv.flag?('update')
        @stats  = argv.flag?('stats')
        super
      end
    
        # @abstract
    #
    # Create a (new) clone of the remote-repository on the deployment target
    #
    # @return void
    #
    def clone
      raise NotImplementedError, 'Your SCM strategy module should provide a #clone method'
    end
    
      puts I18n.t :capified, scope: :capistrano
end

    
    describe 'prefixer' do
  before(:all) do
    ParserSupport.parse_file('library/prefixer')
  end
    
    describe 'text-inputs' do
  before(:all) do
    ParserSupport.parse_file('library/text-inputs')