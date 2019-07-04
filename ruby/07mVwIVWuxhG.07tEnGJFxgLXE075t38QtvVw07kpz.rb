
        
          zap trash: [
               '~/Library/Application Support/Adobe/Lightroom',
               '~/Library/Preferences/com.adobe.Lightroom#{version.major}.plist',
             ]
    
      failure_message_for_should do |actual|
    'expected #{actual.inspect} to have path #{expected.inspect} but was #{actual.current_path.inspect}'
  end
  failure_message_for_should_not do |actual|
    'expected #{actual.inspect} to not have path #{expected.inspect} but it had'
  end
end
    
        it 'generates a jasmine fixture', fixture: true do
      session[:mobile_view] = true
      get :new, format: :mobile
      save_fixture(html_for('body'), 'conversations_new_mobile')
    end
  end
end

    
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

    
      describe '#create' do
    let(:stranger) { FactoryGirl.create(:user) }
    
    #   Copyright (c) 2010-2011, Diaspora Inc.  This file is
#   licensed under the Affero General Public License version 3 or later.  See
#   the COPYRIGHT file.
    
          # Essentially the inverse of +mask_token+.
      def unmask_token(masked_token)
        # Split the token into the one-time pad and the encrypted
        # value and decrypt it
        token_length = masked_token.length / 2
        one_time_pad = masked_token[0...token_length]
        encrypted_token = masked_token[token_length..-1]
        xor_byte_strings(one_time_pad, encrypted_token)
      end
    
            close_body(body) if reaction
    
    RSpec.describe JSFiddleTag, type: :liquid_template do
  describe '#link' do
    let(:jsfiddle_link) { 'http://jsfiddle.net/link2twenty/v2kx9jcd' }
    let(:jsfiddle_link_with_custom_tabs) { 'http://jsfiddle.net/link2twenty/v2kx9jcd result,html,css' }