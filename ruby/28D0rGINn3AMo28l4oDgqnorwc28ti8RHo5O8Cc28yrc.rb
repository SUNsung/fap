
        
                def test_encoded_password
          password = 'am@z1ng_p@ssw0rd#!'
          encoded_password = URI.encode_www_form_component(password)
          spec = resolve 'abstract://foo:#{encoded_password}@localhost/bar'
          assert_equal password, spec['password']
        end
    
                klass ||= AssociationQueryValue
            queries = klass.new(associated_table, value).queries.map do |query|
              expand_from_hash(query).reduce(&:and)
            end
            queries.reduce(&:or)
          elsif table.aggregated_with?(key)
            mapping = table.reflect_on_aggregation(key).mapping
            queries = Array.wrap(value).map do |object|
              mapping.map do |field_attr, aggregate_attr|
                if mapping.size == 1 && !object.respond_to?(aggregate_attr)
                  build(table.arel_attribute(field_attr), object)
                else
                  build(table.arel_attribute(field_attr), object.send(aggregate_attr))
                end
              end.reduce(&:and)
            end
            queries.reduce(&:or)
          else
            build(table.arel_attribute(key), value)
          end
        end
      end
    
        assert_same car, new_bulb.car
  end
    
    class WrongReply < Reply
  validate :errors_on_empty_content
  validate :title_is_wrong_create, on: :create
    
      has_many :replies, dependent: :destroy, foreign_key: 'parent_id', autosave: true
  has_many :approved_replies, -> { approved }, class_name: 'Reply', foreign_key: 'parent_id', counter_cache: 'replies_count'
    
      test 'broadcasting_for with a string' do
    assert_equal 'hello', ChatChannel.broadcasting_for('hello')
  end
end

    
      test 'disallow block and arg together' do
    e = assert_raise ArgumentError do
      ChatChannel.periodically(:send_updates, every: 1) { ping }
    end
    assert_match(/not both/, e.message)
  end
    
      test 'websocket connection' do
    run_in_eventmachine do
      connection = open_connection
      connection.process
    
          assert_kind_of ChatChannel, channel
      assert_equal 1, channel.room.id
    end
  end
    
      test 'broadcast generates notification' do
    begin
      server = TestServer.new
    
      def all_groups(current_user)
    groups = []
    
      # POST /resource/confirmation
  def create
    self.resource = resource_class.send_confirmation_instructions(resource_params)
    yield resource if block_given?
    
        def email_changed(record, opts={})
      devise_mail(record, :email_changed, opts)
    end
    
          def remember_me_is_active?(resource)
        return false unless resource.respond_to?(:remember_me)
        scope = Devise::Mapping.find_scope!(resource)
        _, token, generated_at = cookies.signed[remember_key(resource, scope)]
        resource.remember_me?(token, generated_at)
      end
    
          if options[:skip_helpers] == true
        @used_helpers = @used_routes
      elsif skip = options[:skip_helpers]
        @used_helpers = self.routes - Array(skip).map(&singularizer)
      else
        @used_helpers = self.routes
      end
    end
  end
end

    
      def deliver_digest
    NotificationMailer.digest(user.account).deliver_now!
    user.touch(:last_emailed_at)
  end
end

    
          expect_updated_sign_in_at(user)
    end
    
      def start_url
    '/web/timelines/home'
  end
    
    # Copyright (C) 2008 Rapid7, Inc.
    
    
    # immediate selector of css at pos
    def selector_for_pos(css, pos, depth = -1)
      css[css_def_pos(css, pos, depth)].dup.strip
    end
    
        def log_processing(name)
      puts yellow '  #{File.basename(name)}'
    end
    
    class NodeMincerTest < Minitest::Test
  DUMMY_PATH = 'test/dummy_node_mincer'
    
        def common_options(opts)
      opts.separator ''
      opts.separator 'Common Options:'
    
            def log_level(name, options = {})
          if options[:prepend]
            level = log_levels.values.min
            level = level.nil? ? 0 : level - 1
          else
            level = log_levels.values.max
            level = level.nil? ? 0 : level + 1
          end
          log_levels.update(name => level)
          define_logger(name)
        end
    
      entries.each do |entry|
    if File.exist?(entry[:file])
      warn '[skip] #{entry[:file]} already exists'
    else
      File.open(entry[:file], 'w+') do |f|
        f.write(ERB.new(File.read(entry[:template])).result(binding))
        puts I18n.t(:written_file, scope: :capistrano, file: entry[:file])
      end
    end
  end
    
        it 'Returns nil when Referer header is invalid' do
      env = {'HTTP_HOST' => 'foo.com', 'HTTP_REFERER' => 'http://bar.com/bad|uri'}
      expect(subject.referrer(env)).to be_nil
    end
  end
end

    
            post '/', :file => Rack::Test::UploadedFile.new(temp_file.path), :other => '<bar>'
        expect(body).to eq('_escaped_params_tmp_file\nhello world\n&lt;bar&gt;')
      ensure
        File.unlink(temp_file.path)
      end
    end
  end
end

    
      it 'should not override the header if already set' do
    mock_app with_headers('X-Frame-Options' => 'allow')
    expect(get('/', {}, 'wants' => 'text/html').headers['X-Frame-Options']).to eq('allow')
  end
end

    
      it 'should allow changing the protection mode' do
    # I have no clue what other modes are available
    mock_app do
      use Rack::Protection::XSSHeader, :xss_mode => :foo
      run DummyApp
    end
    
      # Run specs in random order to surface order dependencies. If you find an
  # order dependency and want to debug it, you can fix the order by providing
  # the seed, which is printed after each run.
  #     --seed 1234
  config.order = :random