
        
          it 'imports a scenario that does not exist yet' do
    visit new_scenario_imports_path
    attach_file('Option 2: Upload a Scenario JSON File', File.join(Rails.root, 'data/default_scenario.json'))
    click_on 'Start Import'
    expect(page).to have_text('This scenario has a few agents to get you started. Feel free to change them or delete them as you see fit!')
    expect(page).not_to have_text('This Scenario already exists in your system.')
    check('I confirm that I want to import these Agents.')
    click_on 'Finish Import'
    expect(page).to have_text('Import successful!')
  end
    
      describe '#check' do
    it 'should check that initial run creates an event' do
      @checker.memory[:last_updated_at] = '2016-03-15T14:01:05+00:00'
      expect { @checker.check }.to change { Event.count }.by(1)
    end
  end
end

    
      # add junk pipeline requests
  attr_accessor :junk_pipeline
    
      def timestamp
    (( ::Time.now - self.itime) * 1000.0 ).to_i & 0xffffffff
  end
    
              # Encodes the options field
          #
          # @return [OpenSSL::ASN1::BitString]
          def encode_options
            OpenSSL::ASN1::BitString.new([options].pack('N'))
          end
    
                seq.to_der
          end
    
              # Encodes the pvno field
          #
          # @return [OpenSSL::ASN1::Integer]
          def encode_pvno
            bn = OpenSSL::BN.new(pvno.to_s)
            int = OpenSSL::ASN1::Integer.new(bn)
    
              # Decodes the cname field
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Rex::Proto::Kerberos::Model::PrincipalName]
          def decode_cname(input)
            Rex::Proto::Kerberos::Model::PrincipalName.decode(input.value[0])
          end
    
    class FixPhotosShareVisibilities < ActiveRecord::Migration[4.2]
  class Photo < ApplicationRecord
  end
    
    When /^I fill out the password reset form with '([^']*)' and '([^']*)'$/ do |new_pass,confirm_pass|
  fill_password_reset_form(new_pass, confirm_pass)
end
    
    module Workers
  class PublishToHub < Base
    def perform(*_args)
      # don't publish to pubsubhubbub in cucumber
    end
  end
    
      describe '#new' do
    before do
      sign_in alice, scope: :user
    end
    
    #   Copyright (c) 2010-2011, Diaspora Inc.  This file is
#   licensed under the Affero General Public License version 3 or later.  See
#   the COPYRIGHT file.
    
      gem 'cocoapods-dependencies', '~> 1.0.beta.1'
    
          def has_vector?(request, headers)
        return false if request.xhr?
        return false if options[:allow_if] && options[:allow_if].call(request.env)
        return false unless headers['Content-Type'].to_s.split(';', 2).first =~ /^\s*application\/json\s*$/
        origin(request.env).nil? and referrer(request.env) != request.host
      end
    
        it 'Reads referrer from Host header when Referer header is missing' do
      env = {'HTTP_HOST' => 'foo.com'}
      expect(subject.referrer(env)).to eq('foo.com')
    end