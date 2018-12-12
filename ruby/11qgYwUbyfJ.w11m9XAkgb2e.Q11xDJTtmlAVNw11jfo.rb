
        
          context 'with associated agents' do
    let!(:bob_scheduler_agent) {
      Agents::SchedulerAgent.create!(
        user: users(:bob),
        name: 'Example Scheduler',
        options: {
          'action' => 'run',
          'schedule' => '0 * * * *'
        },
      )
    }
    
        if self.junk_headers
      while str.length < 4096
        if self.fold
          str << 'X-#{Rex::Text.rand_text_alphanumeric(rand(30) + 5)}:\r\n\t#{Rex::Text.rand_text_alphanumeric(rand(1024) + 1)}\r\n'
        else
          str << 'X-#{Rex::Text.rand_text_alphanumeric(rand(30) + 5)}: #{Rex::Text.rand_text_alphanumeric(rand(1024) + 1)}\r\n'
        end
      end
    end
    
      #
  # The method being used for the request (e.g. GET).
  #
  attr_accessor :method
  #
  # The raw URI being requested, before any mucking gets to it
  #
  attr_accessor :raw_uri
    
      # Returns meta tags.
  # You will probably want to use this the web app's version info (or other stuff) can be found
  # in the metadata.
  #
  # @return [Array<Nokogiri::XML::Element>]
  def get_html_meta_elements
    n = get_html_document
    n.search('//meta')
  end
    
                components.each do |c|
              encoded << [c.length].pack('N')
              encoded << c
            end
    
              # Encodes the authenticator field
          #
          # @return [String]
          def encode_authenticator
            authenticator.encode
          end
        end
      end
    end
  end
end
    
    module Rex
  module Proto
    module Kerberos
      module Model
        # This class provides a representation of a Kerberos AuthorizationData data
        # definition.
        class AuthorizationData < Element
          # @!attribute elements
          #   @return [Hash{Symbol => <Integer, String>}] The type of the authorization data
          #   @option [Integer] :type
          #   @option [String] :data
          attr_accessor :elements
    
    When /^(?:|I )click on '([^']*)' navbar title$/ do |title|
  with_scope('.info-bar') do
    find('h5', text: title).click
  end
end

    
      def post_path_by_content(text)
    p = Post.find_by_text(text)
    post_path(p)
  end
    
        it 'generates the contacts_json fixture', :fixture => true do
      json = bob.contacts.map { |c|
               ContactPresenter.new(c, bob).full_hash_with_person
             }.to_json
      save_fixture(json, 'contacts_json')
    end
  end
end

    
    #   Copyright (c) 2010-2011, Diaspora Inc.  This file is
#   licensed under the Affero General Public License version 3 or later.  See
#   the COPYRIGHT file.