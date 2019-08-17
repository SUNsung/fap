
        
          def test_inspect_limited_select_instance
    assert_equal %(#<Topic id: 1>), Topic.all.merge!(select: 'id', where: 'id = 1').first.inspect
    assert_equal %(#<Topic id: 1, title: 'The First Topic'>), Topic.all.merge!(select: 'id, title', where: 'id = 1').first.inspect
  end
    
        m1 = NumericData.find_by(
      bank_balance: 1586.43,
      big_bank_balance: BigDecimal('1000234000567.95')
    )
    
        assert_not_equal time, pet.updated_at
  end
    
      def test_invalid_record_exception
    assert_raise(ActiveRecord::RecordInvalid) { WrongReply.create! }
    assert_raise(ActiveRecord::RecordInvalid) { WrongReply.new.save! }
    
        initializer 'action_mailbox.config' do
      config.after_initialize do |app|
        ActionMailbox.logger = app.config.action_mailbox.logger || Rails.logger
        ActionMailbox.incinerate = app.config.action_mailbox.incinerate.nil? ? true : app.config.action_mailbox.incinerate
        ActionMailbox.incinerate_after = app.config.action_mailbox.incinerate_after || 30.days
        ActionMailbox.queues = app.config.action_mailbox.queues || {}
        ActionMailbox.ingress = app.config.action_mailbox.ingress
      end
    end
  end
end

    
            assert_equal <<~MESSAGE, run_rake_routes
                                         Prefix Verb   URI Pattern                                                                              Controller#Action
                                           cart GET    /cart(.:format)                                                                          cart#show
                  rails_mandrill_inbound_emails POST   /rails/action_mailbox/mandrill/inbound_emails(.:format)                                  action_mailbox/ingresses/mandrill/inbound_emails#create
                  rails_postmark_inbound_emails POST   /rails/action_mailbox/postmark/inbound_emails(.:format)                                  action_mailbox/ingresses/postmark/inbound_emails#create
                     rails_relay_inbound_emails POST   /rails/action_mailbox/relay/inbound_emails(.:format)                                     action_mailbox/ingresses/relay/inbound_emails#create
                  rails_sendgrid_inbound_emails POST   /rails/action_mailbox/sendgrid/inbound_emails(.:format)                                  action_mailbox/ingresses/sendgrid/inbound_emails#create
                   rails_mailgun_inbound_emails POST   /rails/action_mailbox/mailgun/inbound_emails/mime(.:format)                              action_mailbox/ingresses/mailgun/inbound_emails#create
                 rails_conductor_inbound_emails GET    /rails/conductor/action_mailbox/inbound_emails(.:format)                                 rails/conductor/action_mailbox/inbound_emails#index
                                                POST   /rails/conductor/action_mailbox/inbound_emails(.:format)                                 rails/conductor/action_mailbox/inbound_emails#create
              new_rails_conductor_inbound_email GET    /rails/conductor/action_mailbox/inbound_emails/new(.:format)                             rails/conductor/action_mailbox/inbound_emails#new
             edit_rails_conductor_inbound_email GET    /rails/conductor/action_mailbox/inbound_emails/:id/edit(.:format)                        rails/conductor/action_mailbox/inbound_emails#edit
                  rails_conductor_inbound_email GET    /rails/conductor/action_mailbox/inbound_emails/:id(.:format)                             rails/conductor/action_mailbox/inbound_emails#show
                                                PATCH  /rails/conductor/action_mailbox/inbound_emails/:id(.:format)                             rails/conductor/action_mailbox/inbound_emails#update
                                                PUT    /rails/conductor/action_mailbox/inbound_emails/:id(.:format)                             rails/conductor/action_mailbox/inbound_emails#update
                                                DELETE /rails/conductor/action_mailbox/inbound_emails/:id(.:format)                             rails/conductor/action_mailbox/inbound_emails#destroy
          rails_conductor_inbound_email_reroute POST   /rails/conductor/action_mailbox/:inbound_email_id/reroute(.:format)                      rails/conductor/action_mailbox/reroutes#create
                             rails_service_blob GET    /rails/active_storage/blobs/:signed_id/*filename(.:format)                               active_storage/blobs#show
                      rails_blob_representation GET    /rails/active_storage/representations/:signed_blob_id/:variation_key/*filename(.:format) active_storage/representations#show
                             rails_disk_service GET    /rails/active_storage/disk/:encoded_key/*filename(.:format)                              active_storage/disk#show
                      update_rails_disk_service PUT    /rails/active_storage/disk/:encoded_token(.:format)                                      active_storage/disk#update
                           rails_direct_uploads POST   /rails/active_storage/direct_uploads(.:format)                                           active_storage/direct_uploads#create
        MESSAGE
      end
    
      after do
    FileUtils.rm_rf(base_dir)
  end
    
        def find_by_filename(query)
      search_filenames(query).map do |filename|
        Gitlab::Search::FoundBlob.new(blob_filename: filename, project: project, ref: ref, repository: repository)
      end
    end
    
        def add(path, content)
      @pages[path] = content
    end
    
        def error?
      code == 0 || code != 404 && code != 403 && code >= 400 && code <= 599
    end
    
            css('> .section', '#preamble', 'a[href*='dict.html']', 'code var', 'code strong').each do |node|
          node.before(node.children).remove
        end
    
      class C4
    def initialize(gc)
      @gc = gc
    end
    def _dump(s)
      GC.start if @gc
      'foo'
    end
  end
    
        def call(*args)
      import = @proto.split('')
      args.each_with_index do |x, i|
        args[i], = [x == 0 ? nil : x].pack('p').unpack(POINTER_TYPE) if import[i] == 'S'
        args[i], = [x].pack('I').unpack('i') if import[i] == 'I'
      end
      ret, = @func.call(*args)
      return ret || 0
    end
  end
    
      def test_log
    assert_in_delta (0.8047189562170503+1.1071487177940904i), CMath.log(1+2i)
    assert_in_delta (0.7324867603589635+1.0077701926457874i), CMath.log(1+2i,3)
    assert_in_delta Math::PI*1i                             , CMath.log(-1)
    assert_in_delta 3.0                                     , CMath.log(8, 2)
    assert_in_delta (1.092840647090816-0.42078724841586035i), CMath.log(-8, -2)
  end
    
    describe 'GzipReader#getc' do
    
            it 'does not decrement pos' do
          @gz.ungetbyte nil
          @gz.pos.should == 0
        end
      end
    end
  end
    
        describe 'with a single-byte character' do
      it 'appends the character to the stream' do
        @gz.ungetc 'x'
        @gz.read.should == 'x'
      end
    
      task :print_config_variables do
    puts
    puts '------- Printing current config variables -------'
    env.keys.each do |config_variable_key|
      if is_question?(config_variable_key)
        puts '#{config_variable_key.inspect} => Question (awaits user input on next fetch(#{config_variable_key.inspect}))'
      else
        puts '#{config_variable_key.inspect} => #{fetch(config_variable_key).inspect}'
      end
    end
    
    Given(/^file '(.*?)' exists in shared path$/) do |file|
  file_shared_path = TestApp.shared_path.join(file)
  run_vagrant_command('mkdir -p #{file_shared_path.dirname}')
  run_vagrant_command('touch #{file_shared_path}')
end
    
      at_exit do
    if ENV['KEEP_RUNNING']
      puts 'Vagrant vm will be left up because KEEP_RUNNING is set.'
      puts 'Rerun without KEEP_RUNNING set to cleanup the vm.'
    else
      vagrant_cli_command('destroy -f')
    end
  end
    
          private
    
          def fetch(key, default=nil, &block)
        fetched_keys << key unless fetched_keys.include?(key)
        peek(key, default, &block)
      end
    
    @@ layout
<html>
  <head>
    <title>Super Simple Chat with Sinatra</title>
    <meta charset='utf-8' />
    <script src='http://ajax.googleapis.com/ajax/libs/jquery/1/jquery.min.js'></script>
  </head>
  <body><%= yield %></body>
</html>
    
          # This double assignment is to prevent an 'unused variable' warning on
      # Ruby 1.9.3.  Yes, it is dumb, but I don't like Ruby yelling at me.
      frames = frames = exception.backtrace.map { |line|
        frame = OpenStruct.new
        if line =~ /(.*?):(\d+)(:in `(.*)')?/
          frame.filename = $1
          frame.lineno = $2.to_i
          frame.function = $4
    }
    
            if @javascript and not @escaper.respond_to? :escape_javascript
          fail('Use EscapeUtils for JavaScript escaping.')
        end
      end
    
            reaction
      end
    
      it 'accepts post requests with correct X-CSRF-Token header' do
    post('/', {}, 'rack.session' => session, 'HTTP_X_CSRF_TOKEN' => token)
    expect(last_response).to be_ok
  end
    
      def delete_confirm?
    update?
  end
    
        it 'shows v1 if article has frontmatter' do
      article = create(:article, user_id: user.id)
      get '#{article.path}/edit'
      expect(response.body).to include('articleform__form--v1')
    end
  end
    
        if user.is_a?(Organization)
      organization_social_preview_url(user, format: :png)
    else
      user_social_preview_url(user, format: :png)
    end
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
    
        def set(*args)
      options = args.extract_options!
      options.each do |name, value|
        set_preference name, value
      end
    
      def self.check_missing_translations
    self.missing_translation_messages = []
    self.used_translations ||= []
    used_translations.map { |a| a.split('.') }.each do |translation_keys|
      root = translations
      processed_keys = []
      translation_keys.each do |key|
        root = root.fetch(key.to_sym)
        processed_keys << key.to_sym
      rescue KeyError
        error = '#{(processed_keys << key).join('.')} (#{I18n.locale})'
        unless Spree.missing_translation_messages.include?(error)
          Spree.missing_translation_messages << error
        end
      end
    end
  end
    
        # Determine that a return item has already been deemed unreturned and therefore charged
    # by the fact that its exchange inventory unit has popped off to a different order
    unreturned_return_items.select! { |ri| ri.exchange_inventory_units.exists?(order_id: ri.inventory_unit.order_id) }
    
        context 'pre tax amount is specified' do
      subject { build(:return_item, inventory_unit: inventory_unit, pre_tax_amount: 100) }
    
            def destroy
          @option_type = Spree::OptionType.accessible_by(current_ability, :destroy).find(params[:id])
          @option_type.destroy
          render plain: nil, status: 204
        end
    
            def index
          @product_properties = @product.product_properties.accessible_by(current_ability).
                                ransack(params[:q]).result.
                                page(params[:page]).per(params[:per_page])
          respond_with(@product_properties)
        end
    
              Spree::Dependencies.cart_remove_item_service.constantize.call(order: @shipment.order,
                                                                        variant: variant,
                                                                        quantity: quantity,
                                                                        options: { shipment: @shipment })