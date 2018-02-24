    let(:key) { Spaceship::Portal::Key.new(key_attributes) }
    
          it 'splits correctly' do
        expected = [
          'One',
          'Two',
          'Three',
          'Four Token',
          'Or',
          'Newlines',
          'Everywhere'
        ]
        expect(generator.split_keywords(keywords)).to eq(expected)
      end
    end
  end
end

    
              expect(result).to eq(true)
        end
      end
    
          it 'pass a custom build number to the tool' do
        result = Fastlane::FastFile.new.parse('lane :test do
          increment_build_number(build_number: 24, xcodeproj: '.xcproject')
        end').runner.execute(:test)
    
              self.confirmed_at = Time.now.utc
    
      test 'should send confirmation instructions by email after changing email from nil' do
    admin = create_admin(email: nil)
    assert_email_sent 'new_test@example.com' do
      assert admin.update_attributes(email: 'new_test@example.com')
    end
    assert_match 'new_test@example.com', ActionMailer::Base.deliveries.last.body.encoded
  end
    
      protected
    
    class Devise::PasswordsController < DeviseController
  prepend_before_action :require_no_authentication
  # Render the #edit only if coming from a reset password email link
  append_before_action :assert_reset_token_passed, only: :edit
    
      def respond_to_on_destroy
    # We actually need to hardcode this as Rails default responder doesn't
    # support returning empty response on GET request
    respond_to do |format|
      format.all { head :no_content }
      format.any(*navigational_formats) { redirect_to after_sign_out_path_for(resource_name) }
    end
  end
end

    
      it 'doesn't handle foreign base specifiers when base is > 0' do
    [2, 3, 4, 8, 10].each do |base|
      '0111'.to_i(base).should == '111'.to_i(base)
    
        it 'returns a frozen copy if the String is not frozen' do
      input  = 'foo'
      output = -input
    
      it 'normalizes code points in the string according to the form that is specified' do
    @accented_f.unicode_normalize(:nfc).should == '\u1e9b\u0323'
    @accented_f.unicode_normalize(:nfd).should == '\u017f\u0323\u0307'
    @accented_f.unicode_normalize(:nfkc).should == '\u1e69'
    @accented_f.unicode_normalize(:nfkd).should == '\u0073\u0323\u0307'
  end
    
      it 'decodes the remaining bytes when passed the '*' modifier' do
    'abc'.unpack(unpack_format('*')).should == [97, 98, 99]
  end
    
      class Callbacks
    def self.around_create(record)
      now = Time.now.utc
    
      # Before we load the schema, define the timestamp_id function.
  # Idiomatically, we might do this in a migration, but then it
  # wouldn't end up in schema.rb, so we'd need to figure out a way to
  # get it in before doing db:setup as well. This is simpler, and
  # ensures it's always in place.
  Rake::Task['db:schema:load'].enhance ['db:define_timestamp_id']
    
        respond_to do |format|
      format.html
    
        attributes :type, :href, :name
    
        HTTP.get(source).to_s.split('\n').each do |line|
      next if line.start_with? '#'
      parts = line.split(';').map(&:strip)
      next if parts.size < 2
      codes << [parts[0], parts[1].start_with?('fully-qualified')]
    end
    
            def show
          authorize! :read, @order, order_token
          @address = find_address
          respond_with(@address)
        end
    
        @buttons_list = %w(
      button
      [type='button']
      [type='reset']
      [type='submit']
    )
  end
    
          expect('.margin-false-third').to have_ruleset(ruleset)
      expect('.margin-false-third').to_not have_rule(bad_rule)
    end
  end
end

    
          expect('.padding-implied-left').to have_rule(rule)
    end
  end
    
      context 'called with auto' do
    it 'applies to auto to height' do
      rule = 'height: auto; width: 100px;'