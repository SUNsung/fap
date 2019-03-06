
        
                # Parses the options given an OptionParser instance.
        #
        # This is a convenience method that properly handles duping the
        # originally argv array so that it is not destroyed.
        #
        # This method will also automatically detect '-h' and '--help'
        # and print help. And if any invalid options are detected, the help
        # will be printed, as well.
        #
        # If this method returns `nil`, then you should assume that help
        # was printed and parsing failed.
        def parse_options(opts=nil)
          # Creating a shallow copy of the arguments so the OptionParser
          # doesn't destroy the originals.
          argv = @argv.dup
    
            # Initializes the communicator with the machine that we will be
        # communicating with. This base method does nothing (it doesn't
        # even store the machine in an instance variable for you), so you're
        # expected to override this and do something with the machine if
        # you care about it.
        #
        # @param [Machine] machine The machine this instance is expected to
        #   communicate with.
        def initialize(machine)
        end
    
            def initialize
          @logger = Log4r::Logger.new('vagrant::plugin::v1::manager')
          @registered = []
        end
    
              nil
        end
    
            # This method is called if the underlying machine ID changes. Providers
        # can use this method to load in new data for the actual backing
        # machine or to realize that the machine is now gone (the ID can
        # become `nil`). No parameters are given, since the underlying machine
        # is simply the machine instance given to this object. And no
        # return value is necessary.
        def machine_id_changed
        end
    
    Then /^I should have (\d+) nsfw posts$/ do |num_posts|
  page.should have_css('.nsfw-shield', count: num_posts.to_i)
end
    
      class FetchWebfinger < Base
    def perform(*_args)
      # don't do real discovery in cucumber
    end
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

    
          it 'succeeds' do
        expect(response).to be_success
        post_request!
      end
    
    ENV['GEM_HOME'] = ENV['GEM_PATH'] = LogStash::Environment.logstash_gem_home
Gem.use_paths(LogStash::Environment.logstash_gem_home)
    
        def execute
      raise PluginManager::FileNotFoundError, 'Can't file local file #{local_file}' unless ::File.exist?(local_file)
      raise PluginManager::InvalidPackError, 'Invalid format, the pack must be in zip format' unless valid_format?(local_file)
    
      # We compare the before the update and after the update
  def display_updated_plugins(previous_gem_specs_map)
    update_count = 0
    find_latest_gem_specs.values.each do |spec|
      name = spec.name.downcase
      if previous_gem_specs_map.has_key?(name)
        if spec.version != previous_gem_specs_map[name].version
          puts('Updated #{spec.name} #{previous_gem_specs_map[name].version.to_s} to #{spec.version.to_s}')
          update_count += 1
        end
      else
        puts('Installed #{spec.name} #{spec.version.to_s}')
        update_count += 1
      end
    end
    
      describe '#system?' do
    context 'when the pipeline is a system pipeline' do
      let(:settings) { mock_settings({ 'pipeline.system' => true })}
    
              def serialize_resource(resource)
            resource_serializer.new(
              resource,
              include: resource_includes,
              sparse_fields: sparse_fields
            ).serializable_hash
          end
    
        SPREE_GEMS.each do |gem_name|
      Dir.chdir(gem_name) do
        sh 'gem build spree_#{gem_name}.gemspec'
        mv 'spree_#{gem_name}-#{version}.gem', pkgdir
      end
    end
    
              def find_spree_current_order
            Spree::Api::Dependencies.storefront_current_order_finder.constantize.new.execute(
              store: spree_current_store,
              user: spree_current_user,
              token: order_token,
              currency: current_currency
            )
          end
    
            def create
          authorize! :create, Image
          @image = scope.images.new(image_params)
          if @image.save
            respond_with(@image, status: 201, default_template: :show)
          else
            invalid_resource!(@image)
          end
        end
    
            def option_type_params
          params.require(:option_type).permit(permitted_option_type_attributes)
        end
      end
    end
  end
end

    
                import_params = if @current_user_roles.include?('admin')
                              params[:order].present? ? params[:order].permit! : {}
                            else
                              order_params
                            end
    
    module Jekyll
    
      class PageFilters < Octopress::Hooks::Page
    def pre_render(page)
      OctopressFilters::pre_filter(page)
    end