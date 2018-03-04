
        
                def content_tag_string(name, content, options, escape = true)
          tag_options = tag_options(options, escape) if options
          content     = ERB::Util.unwrapped_html_escape(content) if escape
          '<#{name}#{tag_options}>#{PRE_CONTENT_STRINGS[name]}#{content}</#{name}>'.html_safe
        end
    
      def test_relative_url_redirect_with_status_hash
    get :relative_url_redirect_with_status_hash
    assert_response 301
    assert_equal 'http://test.host/things/stuff', redirect_to_url
  end
    
    module ActionCable
  module Server
    # An instance of this configuration object is available via ActionCable.server.config, which allows you to tweak Action Cable configuration
    # in a Rails config initializer.
    class Configuration
      attr_accessor :logger, :log_tags
      attr_accessor :connection_class, :worker_pool_size
      attr_accessor :disable_request_forgery_protection, :allowed_request_origins, :allow_same_origin_as_host
      attr_accessor :cable, :url, :mount_path
    
          # Overwrite this factory method for Redis connections if you want to use a different Redis library than the redis gem.
      # This is needed, for example, when using Makara proxies for distributed Redis.
      cattr_accessor :redis_connector, default: ->(config) do
        ::Redis.new(config.slice(:url, :host, :port, :db, :password))
      end
    
            def test_url_with_authority_for_sqlite3
          spec = resolve 'sqlite3:///foo_test'
          assert_equal('/foo_test', spec['database'])
        end
    
      def flash
    render inline: '<h1><%= notice %></h1>'
  end
    
          class_attribute :delivery_methods, default: {}.freeze
      class_attribute :delivery_method, default: :smtp
    
        # Returns +text+ wrapped at +len+ columns and indented +indent+ spaces.
    # By default column length +len+ equals 72 characters and indent
    # +indent+ equal two spaces.
    #
    #   my_text = 'Here is a sample text with more than 40 characters'
    #
    #   format_paragraph(my_text, 25, 4)
    #   # => '    Here is a sample text with\n    more than 40 characters'
    def format_paragraph(text, len = 72, indent = 2)
      sentences = [[]]
    
        AssertSelectMailer.test('<div><p>foo</p><p>bar</p></div>').deliver_now
    assert_select_email do
      assert_select 'div:root' do
        assert_select 'p:first-child', 'foo'
        assert_select 'p:last-child', 'bar'
      end
    end
  end
    
              # assert differences with Jekyll::PageWithoutAFile instance
          if basic_attrs.include?(prop)
            assert_equal @page[prop], value, 'For <page[\'#{prop}\']>:'
          else
            assert_nil @page[prop]
          end
        end
      end
    end
    
    def dest_dir(*subdirs)
  test_dir('dest', *subdirs)
end
    
          new_theme_name = args.join('_')
      theme = Jekyll::ThemeBuilder.new(new_theme_name, opts)
      if theme.path.exist?
        Jekyll.logger.abort_with 'Conflict:', '#{theme.path} already exists.'
      end
    
        def defaults_deprecate_type(old, current)
      Jekyll.logger.warn 'Defaults:', 'The '#{old}' type has become '#{current}'.'
      Jekyll.logger.warn 'Defaults:', 'Please update your front-matter defaults to use \
                        'type: #{current}'.'
    end
  end
end

    
      private
    
        groups << @user.authorized_groups.visible_to_user(current_user) if current_user
    groups << @user.authorized_groups.public_to_user(current_user)
    
            # Defines a capability for the given guest. The block should return
        # a class/module that has a method with the capability name, ready
        # to be executed. This means that if it is an instance method,
        # the block should return an instance of the class.
        #
        # @param [String] guest The name of the guest
        # @param [String] cap The name of the capability
        def self.guest_capability(guest, cap, &block)
          components.guest_capabilities[guest.to_sym].register(cap.to_sym, &block)
          nil
        end
    
          # This returns the keys (or ids) that are in the string.
      #
      # @return [<Array<String>]
      def keys
        regexp = /^#\s*VAGRANT-BEGIN:\s*(.+?)$\r?\n?(.*)$\r?\n?^#\s*VAGRANT-END:\s(\1)$/m
        @value.scan(regexp).map do |match|
          match[0]
        end
      end
    
    require 'erubis'
    
      def test_utime_with_minus_time_segv
    bug5596 = '[ruby-dev:44838]'
    assert_in_out_err([], <<-EOS, [bug5596], [])
      require 'tempfile'
      t = Time.at(-1)
      begin
        Tempfile.create('test_utime_with_minus_time_segv') {|f|
          File.utime(t, t, f)
        }
      rescue
      end
      puts '#{bug5596}'
    EOS
  end
    
      # Returns a new set containing elements common to the set and the
  # given enumerable object.
  #
  #     Set[1, 3, 5] & Set[3, 2, 1]             #=> #<Set: {3, 1}>
  #     Set['a', 'b', 'z'] & ['a', 'b', 'c']    #=> #<Set: {'a', 'b'}>
  def &(enum)
    n = self.class.new
    do_with_enum(enum) { |o| n.add(o) if include?(o) }
    n
  end
  alias intersection &
    
        assert_nothing_raised {
      set2.flatten!
    }
    
      it 'returns 0.0 if the conversion fails' do
    'bad'.to_f.should == 0.0
    'thx1138'.to_f.should == 0.0
  end
end

    
      def user_search
    if params[:admins_controller_user_search]
      search_params = params.require(:admins_controller_user_search)
                            .permit(:username, :email, :guid, :under13)
      @search = UserSearch.new(search_params)
      @users = @search.perform
    end
    
          def request_authorization_consent_form
        add_claims_to_scopes
        endpoint = Api::OpenidConnect::AuthorizationPoint::EndpointStartPoint.new(current_user)
        handle_start_point_response(endpoint)
      end
    
            def initialize(argv)
          @pod_name = argv.shift_argument
          @wipe_all = argv.flag?('all')
          super
        end
    
            self.description = <<-DESC
          Shows the content of the pods cache as a YAML tree output, organized by pod.
          If `NAME` is given, only the caches for that pod will be included in the output.
        DESC
    
            # Runs the template configuration utilities.
        #
        # @return [void]
        #
        def print_info
          UI.puts '\nTo learn more about the template see `#{template_repo_url}`.'
          UI.puts 'To learn more about creating a new pod, see `#{CREATE_NEW_POD_INFO_URL}`.'
        end