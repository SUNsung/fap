
        
          p.option 'source', '-s', '--source [DIR]', 'Source directory (defaults to ./)'
  p.option 'destination', '-d', '--destination [DIR]',
    'Destination directory (defaults to ./_site)'
  p.option 'safe', '--safe', 'Safe mode (defaults to false)'
  p.option 'plugins_dir', '-p', '--plugins PLUGINS_DIR1[,PLUGINS_DIR2[,...]]', Array,
    'Plugins directory (defaults to ./_plugins)'
  p.option 'layouts_dir', '--layouts DIR', String,
    'Layouts directory (defaults to ./_layouts)'
  p.option 'profile', '--profile', 'Generate a Liquid rendering profile'
    
    def run_bundle(args)
  run_in_shell('bundle', *args.strip.split(' '))
end
    
        def deprecation_message(message)
      Jekyll.logger.warn 'Deprecation:', message
    end
    
            include ::EachBatch
      end
    
          # Sets multiple keys to a given value.
      #
      # mapping - A Hash mapping the cache keys to their values.
      # timeout - The time after which the cache key should expire.
      def self.write_multiple(mapping, timeout: TIMEOUT)
        Redis::Cache.with do |redis|
          redis.multi do |multi|
            mapping.each do |raw_key, value|
              multi.set(cache_key_for(raw_key), value, ex: timeout)
            end
          end
        end
      end
    
              lfs_objects.each do |object|
            yield object
          end
        rescue StandardError => e
          Rails.logger.error('The Lfs import process failed. #{e.message}')
        end
      end
    end
  end
end

    
            # We inject the page number here to make sure that all importers always
        # start where they left off. Simply starting over wouldn't work for
        # repositories with a lot of data (e.g. tens of thousands of comments).
        options = collection_options.merge(page: page_counter.current)
    
          def action_name(env)
        if env[CONTROLLER_KEY]
          action_for_rails(env)
        elsif env[ENDPOINT_KEY]
          action_for_grape(env)
        end
      end
    
      # POST /resource/sign_in
  def create
    self.resource = warden.authenticate!(auth_options)
    set_flash_message!(:notice, :signed_in)
    sign_in(resource_name, resource)
    yield resource if block_given?
    respond_with resource, location: after_sign_in_path_for(resource)
  end
    
        def confirmation_instructions(record, token, opts={})
      @token = token
      devise_mail(record, :confirmation_instructions, opts)
    end
    
      # Causes some terminals to display secure password entry indicators
  def noecho_gets
    system 'stty -echo'
    result = $stdin.gets
    system 'stty echo'
    puts
    result
  end
    
          return unless old_path.directory?
    
      class ShareVisibility < ApplicationRecord
  end
    
    When /^(?:|I )click on '([^']*)' navbar title$/ do |title|
  with_scope('.info-bar') do
    find('h5', text: title).click
  end
end

    
        it 'generates the contacts_json fixture', :fixture => true do
      json = bob.contacts.map { |c|
               ContactPresenter.new(c, bob).full_hash_with_person
             }.to_json
      save_fixture(json, 'contacts_json')
    end
  end
end

    
          it 'assigns @user' do
        get :create, params: valid_params
        expect(assigns(:user)).to be_truthy
      end
    
      # Integration tests
  gem 'diffy'
  gem 'clintegracon'
    
    begin
    
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
    
          # Returns an array of all the when branches in the `case` statement.
      #
      # @return [Array<WhenNode>] an array of `when` nodes
      def when_branches
        node_parts[1...-1]
      end
    
          # Checks whether this node body is a void context.
      # Always `true` for `for`.
      #
      # @return [true] whether the `for` node body is a void context
      def void_context?
        true
      end
    
            pairs.map(&:key).each do |key|
          yield key
        end