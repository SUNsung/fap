
        
              it 'returns http success' do
        expect(response).to have_http_status(200)
      end
    end
    
            let(:object_json) do
          {
            id: 'https://example.com/actor#bar',
            type: 'Note',
            content: 'Lorem ipsum',
            to: 'http://example.com/followers',
            attributedTo: 'https://example.com/actor',
          }
        end
    
      def forward_to_origin!
    ActivityPub::DeliveryWorker.perform_async(
      payload,
      some_local_account.id,
      @target_account.inbox_url
    )
  end
    
        ActivityPub::DeliveryWorker.push_bulk(inboxes) do |inbox_url|
      [payload, @status.account_id, inbox_url]
    end
  rescue ActiveRecord::RecordNotFound
    true
  end
    
          it 'does not process payload if no signature exists' do
        expect_any_instance_of(ActivityPub::LinkedDataSignature).to receive(:verify_account!).and_return(nil)
        expect(ActivityPub::Activity).not_to receive(:factory)
    
        context 'if compliant?' do
      let(:compliant) { true }
    
    version = ['', 'ext/etc/'].find do |dir|
  begin
    break File.open(File.expand_path('../#{dir}/etc.c', __FILE__)) do |f|
      f.gets '\n#define RUBY_ETC_VERSION '
      f.gets[/'(.+)'/, 1]
    end
  rescue
    next
  end
end
    
            assert_match(regexp, ivar)
      end
    end
  end
    
        assert_raise_with_message(TypeError, 'Numeric Number required') { CMath.sin('0') }
    assert_raise_with_message(TypeError, 'Numeric Number required') { CMath.cos('0') }
    assert_raise_with_message(TypeError, 'Numeric Number required') { CMath.tan('0') }
    assert_raise_with_message(TypeError, 'Numeric Number required') { CMath.sinh('0') }
    assert_raise_with_message(TypeError, 'Numeric Number required') { CMath.cosh('0') }
    assert_raise_with_message(TypeError, 'Numeric Number required') { CMath.tanh('0') }
    assert_raise_with_message(TypeError, 'Numeric Number required') { CMath.asin('0') }
    assert_raise_with_message(TypeError, 'Numeric Number required') { CMath.atan('0') }
    assert_raise_with_message(TypeError, 'Numeric Number required') { CMath.asinh('0') }
    assert_raise_with_message(TypeError, 'Numeric Number required') { CMath.acosh('0') }
    assert_raise_with_message(TypeError, 'Numeric Number required') { CMath.atanh('0') }
  end
    
            it 'does not decrement pos' do
          @gz.ungetbyte nil
          @gz.pos.should == 10
        end
    
      it 'writes some compressed data' do
    Zlib::GzipWriter.wrap @io do |gzio|
      gzio.write @data
    end
    
    describe 'Zlib::Inflate#finish' do
    
      at_exit { Application.run! if $!.nil? && Application.run? }
end
    
    desc 'generate gemspec'
task 'rack-protection.gemspec' do
  require 'rack/protection/version'
  content = File.binread 'rack-protection.gemspec'
    
          def accepts?(env)
        raise NotImplementedError, '#{self.class} implementation pending'
      end
    
          def empty_cookie(host, path)
        {:value => '', :domain => host, :path => path, :expires => Time.at(0)}
      end
    
          def escape(object)
        case object
        when Hash   then escape_hash(object)
        when Array  then object.map { |o| escape(o) }
        when String then escape_string(object)
        when Tempfile then object
        else nil
        end
      end
    
        it 'sets a session authenticity token if one does not exist' do
      session = {}
      allow(Rack::Protection::AuthenticityToken).to receive(:random_token).and_return(token)
      allow_any_instance_of(Rack::Protection::AuthenticityToken).to receive(:mask_token).and_return(masked_token)
      Rack::Protection::AuthenticityToken.token(session)
      expect(session[:csrf]).to eq(token)
    end
  end
    
          def preference_field_tag(name, value, options)
        case options[:type]
        when :integer
          text_field_tag(name, value, preference_field_options(options))
        when :boolean
          hidden_field_tag(name, 0, id: '#{name}_hidden') +
            check_box_tag(name, 1, value, preference_field_options(options))
        when :string
          text_field_tag(name, value, preference_field_options(options))
        when :password
          password_field_tag(name, value, preference_field_options(options))
        when :text
          text_area_tag(name, value, preference_field_options(options))
        else
          text_field_tag(name, value, preference_field_options(options))
        end
      end
    
    RSpec.configure do |config|
  # Need to check here again because this is used in i18n_spec too.
  if ENV['CHECK_TRANSLATIONS']
    config.after :suite do
      Spree.check_missing_translations
      if Spree.missing_translation_messages.any?
        puts '\nThere are missing translations within Spree:'
        puts Spree.missing_translation_messages.sort
        exit(1)
      end
    
              context 'when the order does not have a tax zone' do
            before { allow(order).to receive(:tax_zone).and_return nil }
    
              if error
            unprocessable_entity('#{Spree.t(:shipment_transfer_errors_occured, scope: 'api')} \n#{error}')
          else
            @original_shipment.transfer_to_shipment(@variant, @quantity, @target_shipment)
            render json: { success: true, message: Spree.t(:shipment_transfer_success) }, status: 201
          end
        end
    
      yield
    
          def local_project
        [LOCAL_DEFAULT].detect { |f| File.exist?(f) }
      end