
        
              # @return [String, nil] version of local rsync
      def self.local_rsync_version
        if !@_rsync_version
          r = Vagrant::Util::Subprocess.execute('rsync', '--version')
          vmatch = r.stdout.to_s.match(/version\s+(?<version>[\d.]+)\s/)
          if vmatch
            @_rsync_version = vmatch[:version]
          end
        end
        @_rsync_version
      end
    
    # Configure RSpec
RSpec.configure do |c|
  c.formatter = :documentation
    
        let(:empty_network_settings) { {'NetworkSettings' => {'Bridge'=>'', 'SandboxID'=>'randomid', 'HairpinMode'=>false, 'LinkLocalIPv6Address'=>'', 'LinkLocalIPv6PrefixLen'=>0, 'Ports'=>'', 'SandboxKey'=>'/var/run/docker/netns/158b7024a9e4', 'SecondaryIPAddresses'=>nil, 'SecondaryIPv6Addresses'=>nil, 'EndpointID'=>'randomEndpointID', 'Gateway'=>'172.17.0.1', 'GlobalIPv6Address'=>'', 'GlobalIPv6PrefixLen'=>0, 'IPAddress'=>'', 'IPPrefixLen'=>16, 'IPv6Gateway'=>'', 'MacAddress'=>'02:42:ac:11:00:02', 'Networks'=>{'bridge'=>{'IPAMConfig'=>nil, 'Links'=>nil, 'Aliases'=>nil, 'NetworkID'=>'networkIDVar', 'EndpointID'=>'endpointIDVar', 'Gateway'=>'127.0.0.1', 'IPAddress'=>'127.0.0.1', 'IPPrefixLen'=>16, 'IPv6Gateway'=>'', 'GlobalIPv6Address'=>'', 'GlobalIPv6PrefixLen'=>0, 'MacAddress'=>'02:42:ac:11:00:02', 'DriverOpts'=>nil}}}} }
    
    module VagrantPlugins
  module Chef
    module Provisioner
      # This class is a base class where the common functionality shared between
      # chef-solo and chef-client provisioning are stored. This is **not an actual
      # provisioner**. Instead, {ChefSolo} or {ChefServer} should be used.
      class Base < Vagrant.plugin('2', :provisioner)
        include Vagrant::Util
        include Vagrant::Util::Presence
    
            # Execute a `docker-compose` command
        def compose_execute(*cmd, **opts, &block)
          synchronized do
            execute('docker-compose', '-f', composition_path.to_s,
              '-p', machine.env.cwd.basename.to_s, *cmd, **opts, &block)
          end
        end
    
            def execute
          options = {}
          download_options = {}
    
      spec.summary       = %q{Provides access to information typically stored in UNIX /etc directory.}
  spec.description   = spec.summary
  spec.homepage      = 'https://github.com/ruby/etc'
  spec.license       = 'BSD-2-Clause'
    
      it 'returns the next character from the stream' do
    gz = Zlib::GzipReader.new @io
    gz.pos.should == 0
    
      before :each do
    @data = '12345abcde'
    @zip = [31, 139, 8, 0, 44, 220, 209, 71, 0, 3, 51, 52, 50, 54, 49, 77,
            76, 74, 78, 73, 5, 0, 157, 5, 0, 36, 10, 0, 0, 0].pack('C*')
    @io = StringIO.new @zip
  end
    
    describe 'GzipReader#ungetbyte' do
  before :each do
    @data = '12345abcde'
    @zip = [31, 139, 8, 0, 44, 220, 209, 71, 0, 3, 51, 52, 50, 54, 49, 77,
            76, 74, 78, 73, 5, 0, 157, 5, 0, 36, 10, 0, 0, 0].pack('C*')
    @io = StringIO.new @zip
  end
    
      describe 'at the end of the stream' do
    before :each do
      @gz = Zlib::GzipReader.new(@io, external_encoding: Encoding::UTF_8)
      @gz.read
    end
    
    # for each blog URL, check if rss URL exists
matches.each do |match|
  name = match[0]
  web_url = match[1]
    
    # Include LoggerSilence from ActiveSupport. This is needed to silent assets
# requests with `config.assets.quiet`, because the default silence method of
# the logging gem is no-op. See: https://github.com/TwP/logging/issues/11
Logging::Logger.send :alias_method, :local_level, :level
Logging::Logger.send :alias_method, :local_level=, :level=
Logging::Logger.send :include, LoggerSilence

    
        change.down do
      Notification.where(type: 'Notifications::MentionedInPost').update_all(type: 'Notifications::Mentioned')
      Mention.where(mentions_container_type: 'Comment').destroy_all
      Notification.where(type: 'Notifications::MentionedInComment').destroy_all
    end
  end
end

    
            it 'doesn\'t allow the user to reshare the post again' do
          post_request!
          expect(response.code).to eq('422')
          expect(response.body).to eq(I18n.t('reshares.create.error'))
        end
      end
    
          it 'it doesn't call toggle_hidden_shareable' do
        expect(@controller.current_user).not_to receive(:toggle_hidden_shareable).with(an_instance_of(StatusMessage))
        begin
          put :update, params: {id: 42, post_id: @status.id}, format: :js
        rescue ActiveRecord::RecordNotFound
        end
      end
    end
  end
end

    
        def deliver_order_confirmation_email
      OrderMailer.confirm_email(id).deliver_later
      update_column(:confirmation_delivered, true)
    end
    
        scope :checkout, -> { with_state('checkout') }
    scope :completed, -> { with_state('completed') }
    scope :pending, -> { with_state('pending') }
    scope :processing, -> { with_state('processing') }
    scope :failed, -> { with_state('failed') }
    
        def set(*args)
      options = args.extract_options!
      options.each do |name, value|
        set_preference name, value
      end
    
          failed_orders << order unless order.completed? && order.valid?
    rescue StandardError
      failed_orders << order
    end
    failure_message = failed_orders.map { |o| '#{o.number} - #{o.errors.full_messages}' }.join(', ')
    raise UnableToChargeForUnreturnedItems, failure_message if failed_orders.present?
  end
end
    
            def scope
          if params[:product_id]
            Spree::Product.friendly.find(params[:product_id])
          elsif params[:variant_id]
            Spree::Variant.find(params[:variant_id])
          end
        end
      end
    end
  end
end

    
            private
    
            def create
          authorize! :create, Spree::OptionType
          @option_type = Spree::OptionType.new(option_type_params)
          if @option_type.save
            render :show, status: 201
          else
            invalid_resource!(@option_type)
          end
        end
    
            def purchase
          perform_payment_action(:purchase)
        end
    
            def create
          authorize! :create, Property
          @property = Spree::Property.new(property_params)
          if @property.save
            respond_with(@property, status: 201, default_template: :show)
          else
            invalid_resource!(@property)
          end
        end
    
        it 'allows middleware to stop bulk jobs' do
      mware = Class.new do
        def call(worker_klass,msg,q,r)
          msg['args'][0] == 1 ? yield : false
        end
      end
      client = Sidekiq::Client.new
      client.middleware do |chain|
        chain.add mware
      end
      q = Sidekiq::Queue.new
      q.clear
      result = client.push_bulk('class' => 'Blah', 'args' => [[1],[2],[3]])
      assert_equal 1, result.size
      assert_equal 1, q.size
    end
    
        assert_equal dead_set.find_job('123123').value, serialized_job
  end
    
          assert Sidekiq::Client.push_bulk('class' => SomeScheduledWorker, 'args' => [['mike'], ['mike']], 'at' => 600)
      assert_equal 5, ss.size