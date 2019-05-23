
        
              protected
    
          alias :expire_data_after_sign_out! :expire_data_after_sign_in!
    end
  end
end

    
          def self.generate_helpers!(routes=nil)
        routes ||= begin
          mappings = Devise.mappings.values.map(&:used_helpers).flatten.uniq
          Devise::URL_HELPERS.slice(*mappings)
        end
    
          # Checks if the reset password token sent is within the limit time.
      # We do this by calculating if the difference between today and the
      # sending date does not exceed the confirm in time configured.
      # Returns true if the resource is not responding to reset_password_sent_at at all.
      # reset_password_within is a model configuration, must always be an integer value.
      #
      # Example:
      #
      #   # reset_password_within = 1.day and reset_password_sent_at = today
      #   reset_password_period_valid?   # returns true
      #
      #   # reset_password_within = 5.days and reset_password_sent_at = 4.days.ago
      #   reset_password_period_valid?   # returns true
      #
      #   # reset_password_within = 5.days and reset_password_sent_at = 5.days.ago
      #   reset_password_period_valid?   # returns false
      #
      #   # reset_password_within = 0.days
      #   reset_password_period_valid?   # will always return false
      #
      def reset_password_period_valid?
        reset_password_sent_at && reset_password_sent_at.utc >= self.class.reset_password_within.ago.utc
      end
    
          module ClassMethods
        # Create the cookie key using the record id and remember_token
        def serialize_into_cookie(record)
          [record.to_key, record.rememberable_value, Time.now.utc.to_f.to_s]
        end
    
        # This returns whether the guest is ready to work. If this returns
    # `false`, then {#detect!} should be called in order to detect the
    # guest OS.
    #
    # @return [Boolean]
    def ready?
      !!capability_host_chain
    end
  end
end

    
        # Tests if the index has the given UUID.
    #
    # @param [String] uuid
    # @return [Boolean]
    def include?(uuid)
      @lock.synchronize do
        with_index_lock do
          unlocked_reload
          return !!find_by_prefix(uuid)
        end
      end
    end
    
            # Mounts a shared folder via NFS. This assumes that the exports
        # via the host are already done.
        def mount_nfs(ip, folders)
          raise BaseError, _key: :unsupported_nfs
        end
    
              @registered.each do |plugin|
            providers.merge!(plugin.provider.to_hash)
          end
    
              # We split the arguments into two: One set containing any
          # flags before a word, and then the rest. The rest are what
          # get actually sent on to the subcommand.
          argv.each_index do |i|
            if !argv[i].start_with?('-')
              # We found the beginning of the sub command. Split the
              # args up.
              main_args   = argv[0, i]
              sub_command = argv[i]
              sub_args    = argv[i + 1, argv.length - i + 1]
    
            # This contains all the synced folder implementations by name.
        #
        # @return [Registry<Symbol, Array<Class, Integer>>]
        attr_reader :synced_folders
    
      # An irb inspector
  #
  # In order to create your own custom inspector there are two things you
  # should be aware of:
  #
  # Inspector uses #inspect_value, or +inspect_proc+, for output of return values.
  #
  # This also allows for an optional #init+, or +init_proc+, which is called
  # when the inspector is activated.
  #
  # Knowing this, you can create a rudimentary inspector as follows:
  #
  #     irb(main):001:0> ins = IRB::Inspector.new(proc{ |v| 'omg! #{v}' })
  #     irb(main):001:0> IRB.CurrentContext.inspect_mode = ins # => omg! #<IRB::Inspector:0x007f46f7ba7d28>
  #     irb(main):001:0> 'what?' #=> omg! what?
  #
  class Inspector
    # Default inspectors available to irb, this includes:
    #
    # +:pp+::       Using Kernel#pretty_inspect
    # +:yaml+::     Using YAML.dump
    # +:marshal+::  Using Marshal.dump
    INSPECTORS = {}
    
      def test_gc_stress_on_realloc
    assert_normal_exit(<<-'end;', '[Bug #9859]')
      class C
        def initialize
          @a = nil
          @b = nil
          @c = nil
          @d = nil
          @e = nil
          @f = nil
        end
      end
    
    $x = Hash.new{[]}
test_ok($x[22] == [])
test_ok(!$x[22].equal?($x[22]))
    
        if t > 0.0 and t < isect.t then
      isect.hit = true
      isect.t = t
      isect.n = @n
      isect.pl = Vec.new(ray.org.x + t * ray.dir.x,
                        ray.org.y + t * ray.dir.y,
                        ray.org.z + t * ray.dir.z)
    end
    nil
  end
end
    
    def to_boolean(proc)
  IF[proc][true][false]
end
    
      # Configure an appender that will write log events to STDOUT. A colorized
  # pattern layout is used to format the log events into strings before
  # writing.
  Logging.appenders.stdout('stdout',
                           auto_flushing: true,
                           layout:        Logging.layouts.pattern(
                             pattern:      pattern,
                             color_scheme: 'bright'
                           )
                          ) if config.log_to.include? 'stdout'
    
    def await_condition &condition
  start_time = Time.zone.now
  until condition.call
    return false if (Time.zone.now - start_time) > Capybara.default_max_wait_time
    sleep 0.05
  end
  true
end

    
    describe ConversationsController, :type => :controller do
  describe '#index' do
    before do
      @person = alice.contacts.first.person
      hash = {
        :author => @person,
        :participant_ids => [alice.person.id, @person.id],
        :subject => 'not spam',
        :messages_attributes => [ {:author => @person, :text => 'cool stuff'} ]
      }
      @conv1 = Conversation.create(hash)
      Message.create(:author => @person, :created_at => Time.now + 100, :text => 'message', :conversation_id => @conv1.id)
             .increase_unread(alice)
      Message.create(:author => @person, :created_at => Time.now + 200, :text => 'another message', :conversation_id => @conv1.id)
             .increase_unread(alice)
    
    #   Copyright (c) 2010-2011, Diaspora Inc.  This file is
#   licensed under the Affero General Public License version 3 or later.  See
#   the COPYRIGHT file.
    
          it 'should not create the participation' do
        post :create, params: {post_id: @post.id}
        expect(alice.participations.where(:target_id => @post.id)).not_to exist
        expect(response.code).to eq('403')
      end
    end
  end
    
      describe '#create' do
    it 'redirects to /stream for a non-mobile user' do
      post :create, params: {user: {remember_me: '0', username: @user.username, password: 'evankorth'}}
      expect(response).to be_redirect
      expect(response.location).to match /^#{stream_url}\??$/
    end
    
          def preference_field_options(options)
        field_options = case options[:type]
                        when :integer
                          {
                            size: 10,
                            class: 'input_integer form-control'
                          }
                        when :boolean
                          {}
                        when :string
                          {
                            size: 10,
                            class: 'input_string form-control'
                          }
                        when :password
                          {
                            size: 10,
                            class: 'password_string form-control'
                          }
                        when :text
                          {
                            rows: 15,
                            cols: 85,
                            class: 'form-control'
                          }
                        else
                          {
                            size: 10,
                            class: 'input_string form-control'
                          }
                        end
    
      desc 'Build all spree gems'
  task :build do
    pkgdir = File.expand_path('../pkg', __FILE__)
    FileUtils.mkdir_p pkgdir
    
              def ensure_order
            raise ActiveRecord::RecordNotFound if spree_current_order.nil?
          end
    
            def create
          authorize! :create, Spree::Order
          if can?(:admin, Spree::Order)
            order_user = if @current_user_roles.include?('admin') && order_params[:user_id]
                           Spree.user_class.find(order_params[:user_id])
                         else
                           current_api_user
                         end
    
            def set_up_shipping_category
          if shipping_category = params[:product].delete(:shipping_category)
            id = ShippingCategory.find_or_create_by(name: shipping_category).id
            params[:product][:shipping_category_id] = id
          end
        end
      end
    end
  end
end

    
              def next_service
            Spree::Api::Dependencies.storefront_checkout_next_service.constantize
          end
    
          unless file.file?
        return 'File #{file} could not be found'
      end
    
        def render(context)
      output = super
      types = {
        '.mp4' => 'type='video/mp4; codecs=\'avc1.42E01E, mp4a.40.2\''',
        '.ogv' => 'type='video/ogg; codecs=theora, vorbis'',
        '.webm' => 'type='video/webm; codecs=vp8, vorbis''
      }
      if @videos.size > 0
        video =  '<video #{sizes} preload='metadata' controls #{poster}>'
        @videos.each do |v|
          video << '<source src='#{v}' #{types[File.extname(v)]}>'
        end
        video += '</video>'
      else
        'Error processing input, expected syntax: {% video url/to/video [url/to/video] [url/to/video] [width height] [url/to/poster] %}'
      end
    end
    
    Before do
  gemfile = ENV['BUNDLE_GEMFILE'].to_s
  ENV['BUNDLE_GEMFILE'] = File.join(Dir.pwd, gemfile) unless gemfile.start_with?(Dir.pwd)
  @framework_version = nil
end