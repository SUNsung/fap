
        
        module Vagrant
  # This class handles guest-OS specific interactions with a machine.
  # It is primarily responsible for detecting the proper guest OS
  # implementation and then delegating capabilities.
  #
  # Vagrant has many tasks which require specific guest OS knowledge.
  # These are implemented using a guest/capability system. Various plugins
  # register as 'guests' which determine the underlying OS of the system.
  # Then, 'guest capabilities' register themselves for a specific OS (one
  # or more), and these capabilities are called.
  #
  # Example capabilities might be 'mount_virtualbox_shared_folder' or
  # 'configure_networks'.
  #
  # This system allows for maximum flexibility and pluginability for doing
  # guest OS specific operations.
  class Guest
    include CapabilityHost
    
            # Execute a command on the remote machine. The exact semantics
        # of this method are up to the implementor, but in general the
        # users of this class will expect this to be a shell.
        #
        # This method gives you no way to write data back to the remote
        # machine, so only execute commands that don't expect input.
        #
        # @param [String] command Command to execute.
        # @yield [type, data] Realtime output of the command being executed.
        # @yieldparam [String] type Type of the output. This can be
        #   `:stdout`, `:stderr`, etc. The exact types are up to the
        #   implementor.
        # @yieldparam [String] data Data for the given output.
        # @return [Integer] Exit code of the command.
        def execute(command, opts=nil)
        end
    
            # This is called to upgrade this V1 config to V2. The parameter given
        # is the full V2 configuration object, so you can do anything to it
        # that you want.
        #
        # No return value is expected, modifications should be made directly
        # to the new V2 object.
        #
        # @param [V2::Root] new
        def upgrade(new)
        end
    
            # Mounts a shared folder.
        #
        # This method should create, mount, and properly set permissions
        # on the shared folder. This method should also properly
        # adhere to any configuration values such as `shared_folder_uid`
        # on `config.vm`.
        #
        # @param [String] name The name of the shared folder.
        # @param [String] guestpath The path on the machine which the user
        #   wants the folder mounted.
        # @param [Hash] options Additional options for the shared folder
        #   which can be honored.
        def mount_shared_folder(name, guestpath, options)
          raise BaseError, _key: :unsupported_shared_folder
        end
    
            # This method is expected to return a class that is used for
        # configuring the provisioner. This return value is expected to be
        # a subclass of {Config}.
        #
        # @return [Config]
        def self.config_class
        end
    
            # Called after the configuration is finalized and loaded to validate
        # this object.
        #
        # @param [Machine] machine Access to the machine that is being
        #   validated.
        # @return [Hash]
        def validate(machine)
          return { self.to_s => _detected_errors }
        end
    
        it 'converts String argument with Kernel#Integer' do
      format('%d', '0b1010').should == '10'
      format('%d', '112').should == '112'
      format('%d', '0127').should == '87'
      format('%d', '0xc4').should == '196'
    end
    
      it 'raises a TypeError when passed a String' do
    lambda { sleep('2')   }.should raise_error(TypeError)
  end
    
      it 'raises a TypeError when passed nil' do
    lambda { srand(nil) }.should raise_error(TypeError)
  end
    
      it 'writes each array element on a line when passes an array' do
    lambda {
      $VERBOSE = true
      warn(['line 1', 'line 2'])
    }.should output(nil, 'line 1\nline 2\n')
  end
    
    # skip over blogs that aren't found
unavailable = []
fast_forwards = [
  'Baidu Research',
  'Booking.com',
  'Fynd',
  'Graphcool',
  'LinkedIn',
  'Medallia',
  'OmniTI',
  'Paperless Post',
  'Pluralsight',
  'Prolific Interactive',
  'Quora',
  'Robert Elder Software',
  'Simple',
  'SlideShare',
  'SourceClear',
  'Viget',
  'Zalando',
  'Zapier',
  'Zynga',
  'Dave Beazley',
  'Edan Kwan',
  'Grzegorz Gajos',
  'Joe Armstrong',
  'Kai Hendry',
  'LiveOverflow'
]
    
            <<END
/*
#{header.gsub('*/', '*\\/')}
    
          @options[:for_engine][:filename] = @options[:filename]
      @options[:for_engine][:css_filename] = @options[:output] if @options[:output].is_a?(String)
      @options[:for_engine][:sourcemap_filename] = @options[:sourcemap_filename]
      @options[:for_engine][:sourcemap] = @options[:sourcemap]
    
            found = possible_files(remove_root(name)).map do |f, s|
          path = if dir == '.' || Sass::Util.pathname(f).absolute?
                   f
                 else
                   '#{escape_glob_characters(dir)}/#{f}'
                 end
          Dir[path].map do |full_path|
            full_path.gsub!(REDUNDANT_DIRECTORY, File::SEPARATOR)
            [Sass::Util.cleanpath(full_path).to_s, s]
          end
        end.flatten(1)
        return if found.empty?
    
        pod 'ObjCPod', path: 'ObjCPod'
    pod 'SwiftPod', path: 'SwiftPod'
    pod 'MixedPod', path: 'MixedPod'
    pod 'CustomModuleMapPod', path: 'CustomModuleMapPod'
    
        attr_reader :local_file
    
        after :each do
      logstash.uninstall
    end
    
          def order_token
        request.headers['X-Spree-Order-Token'] || params[:order_token]
      end
    
            include Spree::Core::ControllerHelpers::Auth
        include Spree::Core::ControllerHelpers::Order
        # This before_action comes from Spree::Core::ControllerHelpers::Order
        skip_before_action :set_current_order
    
            def update
          @image = scope.images.accessible_by(current_ability, :update).find(params[:id])
          if @image.update_attributes(image_params)
            respond_with(@image, default_template: :show)
          else
            invalid_resource!(@image)
          end
        end
    
              unless inventory_unit.respond_to?(can_event) &&
              inventory_unit.send(can_event)
            render plain: { exception: 'cannot transition to #{@event}' }.to_json,
                   status: 200
            false
          end
        end
    
            private
    
            def create
          authorize! :create, StockLocation
          @stock_location = StockLocation.new(stock_location_params)
          if @stock_location.save
            respond_with(@stock_location, status: 201, default_template: :show)
          else
            invalid_resource!(@stock_location)
          end
        end
    
            def update
          authorize! :update, taxon
          if taxon.update_attributes(taxon_params)
            respond_with(taxon, status: 200, default_template: :show)
          else
            invalid_resource!(taxon)
          end
        end
    
              @users = @users.result.page(params[:page]).per(params[:per_page])
          expires_in 15.minutes, public: true
          headers['Surrogate-Control'] = 'max-age=#{15.minutes}'
          respond_with(@users)
        end