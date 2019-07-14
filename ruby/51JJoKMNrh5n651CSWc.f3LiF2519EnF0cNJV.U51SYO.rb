
        
              # Adds a value to a set.
      #
      # raw_key - The key of the set to add the value to.
      # value - The value to add to the set.
      # timeout - The new timeout of the key.
      def self.set_add(raw_key, value, timeout: TIMEOUT)
        key = cache_key_for(raw_key)
    
              waiter.jobs_remaining += 1
        end
    
    # Include LoggerSilence from ActiveSupport. This is needed to silent assets
# requests with `config.assets.quiet`, because the default silence method of
# the logging gem is no-op. See: https://github.com/TwP/logging/issues/11
Logging::Logger.send :alias_method, :local_level, :level
Logging::Logger.send :alias_method, :local_level=, :level=
Logging::Logger.send :include, LoggerSilence

    
        remove_duplicates
    remove_index :share_visibilities, name: :shareable_and_user_id
    add_index :share_visibilities, %i(shareable_id shareable_type user_id), name: :shareable_and_user_id, unique: true
    
        it 'generates a jasmine fixture', :fixture => true do
      contact = alice.contact_for(bob.person)
      aspect = alice.aspects.create(:name => 'people')
      contact.aspects << aspect
      contact.save
      get :new, params: {person_id: bob.person.id}
      save_fixture(html_for('body'), 'status_message_new')
    end
  end
end

    
        context 'on my own post' do
      before do
        aspect_to_post = alice.aspects.where(:name => 'generic').first
        @post = alice.post :status_message, :text => 'something', :to => aspect_to_post
      end
    
          it 'federates' do
        allow_any_instance_of(Participation::Generator).to receive(:create!)
        expect(Diaspora::Federation::Dispatcher).to receive(:defer_dispatch)
        post_request!
      end
    
          it 'it calls toggle_hidden_shareable' do
        expect(@controller.current_user).to receive(:toggle_hidden_shareable).with(an_instance_of(StatusMessage))
        put :update, params: {id: 42, post_id: @status.id}, format: :js
      end
    end
    
    __END__
    
      <script type='text/javascript'>
  //<!--
  function toggle(id) {
    var pre  = document.getElementById('pre-' + id);
    var post = document.getElementById('post-' + id);
    var context = document.getElementById('context-' + id);
    }
    
          DIRECTIVES = %i(base_uri child_src connect_src default_src
                      font_src form_action frame_ancestors frame_src
                      img_src manifest_src media_src object_src
                      plugin_types referrer reflected_xss report_to
                      report_uri require_sri_for sandbox script_src
                      style_src worker_src).freeze
    
          def remove_bad_cookies(request, response)
        return if bad_cookies.empty?
        paths = cookie_paths(request.path)
        bad_cookies.each do |name|
          paths.each { |path| response.set_cookie name, empty_cookie(request.host, path) }
        end
      end
    
      it 'accepts post requests with correct X-CSRF-Token header' do
    post('/', {}, 'rack.session' => session, 'HTTP_X_CSRF_TOKEN' => token)
    expect(last_response).to be_ok
  end
    
      it 'should allow changing report only' do
    # I have no clue what other modes are available
    mock_app do
      use Rack::Protection::ContentSecurityPolicy, :report_uri => '/my_amazing_csp_report_parser', :report_only => true
      run DummyApp
    end
    
        it 'denies requests with sneaky encoded session cookies' do
      get '/', {}, 'HTTP_COOKIE' => 'rack.session=EVIL_SESSION_TOKEN; rack.%73ession=SESSION_TOKEN'
      expect(last_response).not_to be_ok
    end
    
        def URIEncodeOctets(octets, result, index)
      if (@@hexCharCodeArray == 0)
        @@hexCharCodeArray = [48, 49, 50, 51, 52, 53, 54, 55, 56, 57,
                              65, 66, 67, 68, 69, 70];
      end
      index = URIAddEncodedOctetToBuffer(octets[0], result, index);
      if (octets[1]);
        index = URIAddEncodedOctetToBuffer(octets[1], result, index)
      end
      if (octets[2]);
        index = URIAddEncodedOctetToBuffer(octets[2], result, index)
      end
      if (octets[3]);
        index = URIAddEncodedOctetToBuffer(octets[3], result, index)
      end
      return index;
    end
    
          # http://stackoverflow.com/questions/9445760/bit-shifting-in-ruby
      def left_shift(int, shift)
        r = ((int & 0xFF) << (shift & 0x1F)) & 0xFFFFFFFF
        # 1>>31, 2**32
        (r & 2147483648) == 0 ? r : r - 4294967296
      end
    
    # Disable the metadata feature
$METADATA = false
    
      test 'frontend links for editing blocked' do
    Precious::App.set(:wiki_options, { allow_editing: false })
    get '/A'
    
    # Read command line options into `options` hash
begin
  opts.parse!
rescue OptionParser::InvalidOption
  puts 'gollum: #{$!.message}'
  puts 'gollum: try 'gollum --help' for more information'
  exit
end
    
            def product_params
          params.require(:product).permit(permitted_product_attributes)
        end
    
          def variant_attributes
        if @current_user_roles&.include?('admin')
          @@variant_attributes + [:cost_price]
        else
          @@variant_attributes
        end
      end
    end
  end
end
