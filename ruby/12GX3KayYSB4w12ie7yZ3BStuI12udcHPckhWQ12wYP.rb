
        
        def pre_pr(url)
  url[-1, 1] == FORWARD_SLASH ? url : File.dirname(url)
end
    
    Benchmark.ips do |x|
  x.report('local-require') { local_require }
  x.report('global-require') { global_require }
  x.report('graceful-require') { graceful_require }
  x.compare!
end

    
    # No trailing slash
Benchmark.ips do |x|
  x.report('with body include?') { CONTENT_CONTAINING.include?('<body') }
  x.report('with body regexp')   { CONTENT_CONTAINING =~ /<\s*body/ }
  x.compare!
end

    
    Mercenary.program(:jekyll) do |p|
  p.version Jekyll::VERSION
  p.description 'Jekyll is a blog-aware, static site generator in Ruby'
  p.syntax 'jekyll <subcommand> [options]'
    
            # rubocop:disable Metrics/AbcSize
        def process(args, opts)
          if !args || args.empty?
            raise Jekyll::Errors::InvalidThemeName, 'You must specify a theme name.'
          end
    
        def deprecation_message(message)
      Jekyll.logger.warn 'Deprecation:', message
    end
    
      def page_requested?
    params[:page] == 'true'
  end
    
      before_action :set_account
  respond_to :txt
    
      private
    
      def data_params
    return {} if params[:data].blank?
    params.require(:data).permit(alerts: [:follow, :favourite, :reblog, :mention])
  end
end

    
        head + [data.length].pack('v') + data
  end
    
                encoded
          end
    
                if OpenSSL::HMAC.digest('MD5', k1, decrypted) != checksum
              raise ::RuntimeError, 'RC4-HMAC decryption failed, incorrect checksum verification'
            end
    
              # @!attribute type
          #   @return [Integer] The algorithm used to generate the checksum
          attr_accessor :type
          # @!attribute checksum
          #   @return [String] The checksum itself
          attr_accessor :checksum
    
    module Rex
  module Proto
    module Kerberos
      module Model
        # This class provides a representation of an encrypted message.
        class EncryptedData < Element
          # @!attribute name_type
          #   @return [Integer] The encryption algorithm
          attr_accessor :etype
          # @!attribute kvno
          #   @return [Integer] The version number of the key
          attr_accessor :kvno
          # @!attribute cipher
          #   @return [String] The enciphered text
          attr_accessor :cipher
    
                self
          end
    
                self
          end
    
    When /^I (?:sign|log) in manually as '([^']*)' with password '([^']*)'( on the mobile website)?$/ \
do |username, password, mobile|
  @me = User.find_by_username(username)
  @me.password ||= password
  manual_login
  confirm_login mobile
end
    
    Then /^I should have (\d+) nsfw posts$/ do |num_posts|
  page.should have_css('.nsfw-shield', count: num_posts.to_i)
end
    
    RSpec::Matchers.define :have_path do |expected|
  match do |actual|
    await_condition { actual.current_path == expected }
  end
    
    #   Copyright (c) 2010-2011, Diaspora Inc.  This file is
#   licensed under the Affero General Public License version 3 or later.  See
#   the COPYRIGHT file.
    
        it 'generates the contacts_json fixture', :fixture => true do
      json = bob.contacts.map { |c|
               ContactPresenter.new(c, bob).full_hash_with_person
             }.to_json
      save_fixture(json, 'contacts_json')
    end
  end
end

    
      describe '#index' do
    context 'with a private post' do
      before do
        @alices_aspect = alice.aspects.where(name: 'generic').first
        @post = alice.post(:status_message, text: 'hey', to: @alices_aspect.id)
      end