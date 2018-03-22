
        
          def present(payload)
    if payload.is_a?(Hash)
      payload = ActiveSupport::HashWithIndifferentAccess.new(payload)
      MAIN_KEYS.each do |key|
        return { :title => payload[key].to_s, :entries => present_hash(payload, key) } if payload.has_key?(key)
      end
    
      def destroy_failed
    Delayed::Job.where.not(failed_at: nil).delete_all
    
      def test_delete_if
    h1 = {}
    ENV.each_pair {|k, v| h1[k] = v }
    ENV['test'] = 'foo'
    ENV.delete_if {|k, v| IGNORE_CASE ? k.upcase == 'TEST' : k == 'test' }
    h2 = {}
    ENV.each_pair {|k, v| h2[k] = v }
    assert_equal(h1, h2)
    
        iset = Set.new.compare_by_identity
    assert_send([iset, :compare_by_identity?])
    iset.merge(array)
    assert_equal(5, iset.size)
    assert_equal(array.map(&:object_id).sort, iset.map(&:object_id).sort)
    
      it 'does not call #initialize' do
    c = Class.new(Thread) do
      def initialize
        ScratchPad.record :bad
      end
    end
    
            def validate!
          super
          if @pod_name.nil? && !@wipe_all
            # Security measure, to avoid removing the pod cache too agressively by mistake
            help! 'You should either specify a pod name or use the --all flag'
          end
        end
    
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
    
              if @address.update_attributes(address_params)
            respond_with(@address, default_template: :show)
          else
            invalid_resource!(@address)
          end
        end