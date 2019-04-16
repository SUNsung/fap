
        
            def add(entry)
      if entry.is_a? Array
        entry.each(&method(:add))
      else
        add_entry(entry) unless entry.root?
      end
    end
    
        def parse(response)
      parser = Parser.new(response.body)
      [parser.html, parser.title]
    end
    
          def initialize(limit)
        @limit = limit
        @minute = nil
        @counter = 0
      end
    
            css('.c10', '.showcase', '.showcase-content', '.l-main-section', 'div.div', 'div[flex]', 'code-tabs', 'md-card', 'md-card-content', 'div:not([class])', 'footer', '.card-row', '.card-row-container', 'figure', 'blockquote', 'exported', 'defined', 'div.ng-scope', '.code-example header', 'section.desc', '.row', '.dart-api-entry-main', '.main-content', 'section.summary', 'span.signature').each do |node|
          node.before(node.children).remove
        end
    
            css('p > code:first-child:last-child', 'td > code:first-child:last-child').each do |node|
          next if node.previous.try(:content).present? || node.next.try(:content).present?
          node.inner_html = node.inner_html.squish.gsub(/<br(\ \/)?>\s*/, '\n')
          node.content = node.content.strip
          node.name = 'pre' if node.content =~ /\s/
          node.parent.before(node.parent.children).remove if node.parent.name == 'p'
        end
    
              # Encodes the start_time field
          #
          # @return [String]
          def encode_start_time
            [start_time].pack('N')
          end
    
                decode_asn1(asn1)
          end
    
              # Encodes the type field
          #
          # @return [OpenSSL::ASN1::Integer]
          def encode_type
            bn = OpenSSL::BN.new(type.to_s)
            int = OpenSSL::ASN1::Integer.new(bn)
    
      url 'http://swupdl.adobe.com/updates/oobe/aam20/mac/AdobeLightroom-#{version.major}.0/#{version}/setup.dmg'
  name 'Adobe Photoshop Lightroom'
  homepage 'https://www.adobe.com/products/photoshop-lightroom.html'
    
    When /^I submit forgot password form$/ do
  submit_forgot_password_form
end
    
    module Workers
  class PublishToHub < Base
    def perform(*_args)
      # don't publish to pubsubhubbub in cucumber
    end
  end
    
          @conv2 = Conversation.create(hash)
      Message.create(:author => @person, :created_at => Time.now + 100, :text => 'message', :conversation_id => @conv2.id)
             .increase_unread(alice)
    
        sign_in(alice, scope: :user)
  end
    
      gem.required_ruby_version = '>= 2.0'
  gem.add_dependency 'airbrussh', '>= 1.0.0'
  gem.add_dependency 'i18n'
  gem.add_dependency 'rake', '>= 10.0.0'
  gem.add_dependency 'sshkit', '>= 1.9.0'