
        
            gu = GroupUser.find_by(user_id: moderator.id, group_id: group.id)
    expect(gu.notification_level).to eq(NotificationLevels.all[:watching])
    
        # The category for users with trust level 3 has been created.
    # Add initial permissions and description. They can be changed later.
    
        def finalize_session
      @threads.map(&:join)
    end
  end
end

    
          it 'does not add a verbose flag to command if verbose is set to false' do
        result = Fastlane::FastFile.new.parse('lane :test do
            carthage(
              verbose: false
            )
          end').runner.execute(:test)
    
            expect(result.size).to eq(3)
        expect(result[0]).to eq(%(security create-keychain -p #{password.shellescape} ~/Library/Keychains/test.keychain))
      end
    
          it 'handles the exclude_dirs parameter with no elements correctly' do
        result = Fastlane::FastFile.new.parse('lane :test do
          ensure_no_debug_code(text: 'pry', path: '.', exclude_dirs: [])
        end').runner.execute(:test)
        expect(result).to eq('grep -RE 'pry' '#{File.absolute_path('./')}'')
      end
    
            FastlaneCore::CertChecker.wwdr_certificate_installed?
      end
    
    When /^I (?:log|sign) out manually$/ do
  manual_logout
end
    
    # Capybara defaults to XPath selectors rather than Webrat's default of CSS3. In
# order to ease the transition to Capybara we set the default here. If you'd
# prefer to use XPath just remove this line and adjust any selectors in your
# steps to use the XPath syntax.
Capybara.default_selector = :css
    
          get :index, params: {a_id: @aspect.id, page: '1'}, format: :json
      save_fixture(response.body, 'aspects_manage_contacts_json')
    end
    
      get(/.+/) do
    send_sinatra_file(request.path) {404}
  end
    
          if markup =~ /(?<class>\S.*\s+)?(?<src>(?:https?:\/\/|\/|\S+\/)\S+)(?:\s+(?<width>\d+))?(?:\s+(?<height>\d+))?(?<title>\s+.+)?/i
        @img = attributes.reduce({}) { |img, attr| img[attr] = $~[attr].strip if $~[attr]; img }
        if /(?:'|')(?<title>[^'']+)?(?:'|')\s+(?:'|')(?<alt>[^'']+)?(?:'|')/ =~ @img['title']
          @img['title']  = title
          @img['alt']    = alt
        else
          @img['alt']    = @img['title'].gsub!(/'/, '&#34;') if @img['title']
        end
        @img['class'].gsub!(/'/, '') if @img['class']
      end
      super
    end
    
      class IncludeCodeTag < Liquid::Tag
    def initialize(tag_name, markup, tokens)
      @title = nil
      @file = nil
      if markup.strip =~ /\s*lang:(\S+)/i
        @filetype = $1
        markup = markup.strip.sub(/lang:\S+/i,'')
      end
      if markup.strip =~ /(.*)?(\s+|^)(\/*\S+)/i
        @title = $1 || nil
        @file = $3
      end
      super
    end
    
      # Escapes CDATA sections in post content
  def cdata_escape(input)
    input.gsub(/<!\[CDATA\[/, '&lt;![CDATA[').gsub(/\]\]>/, ']]&gt;')
  end
    
    module Jekyll