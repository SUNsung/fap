
        
                cmd = ['git tag']
    
          it 'generates the correct git command with an array of paths' do
        result = Fastlane::FastFile.new.parse('lane :test do
          git_commit(path: ['./fastlane/README.md', './LICENSE'], message: 'message')
        end').runner.execute(:test)
    
              result = Fastlane::FastFile.new.parse('lane :test do
            swiftlint(
              strict: true,
              executable: '#{CUSTOM_EXECUTABLE_NAME}'
            )
          end').runner.execute(:test)
    
            keychain = 'keychain with spaces.keychain'
        cmd = %r{curl -f -o (([A-Z]\:)?\/.+) https://developer\.apple\.com/certificationauthority/AppleWWDRCA.cer && security import \1 -k #{Regexp.escape(keychain.shellescape)}}
        require 'open3'
    
    shelljoin_testcases = [
  {
    'it' => '(#1) on array with entry with space',
    'it_result' => {
      'windows' => 'wraps this entry in double quotes',
      'other'   => 'escapes the space in this entry'
    },
    'input' => ['a', 'b c', 'd'],
    'expect' => {
      'windows' => 'a 'b c' d',
      'other'   => 'a b\ c d'
    }
  },
  {
    'it' => '(#2) on array with entry with string wrapped in double quotes and space',
    'it_result' => {
      'windows' => 'wraps the entry with space in quote, and doubles the double quotes',
      'other'   => 'escapes the double quotes and escapes the space'
    },
    'input' => ['a', ''b' c', 'd'],
    'expect' => {
      'windows' => 'a '''b'' c' d',
      'other'   => 'a \'b\'\ c d'
    }
  },
  {
    'it' => '(#3) on array with entry with string wrapped in single quotes and space',
    'it_result' => {
      'windows' => 'no changes',
      'other'   => 'escapes the single quotes and space'
    },
    'input' => ['a', ''b' c', 'd'],
    'expect' => {
      'windows' => 'a \''b' c\' d',
      'other'   => 'a \\'b\\'\\ c d'
    }
  },
  # https://github.com/ruby/ruby/blob/ac543abe91d7325ace7254f635f34e71e1faaf2e/test/test_shellwords.rb#L67-L68
  {
    'it' => '(#4) on array with entry that is `$$`',
    'it_result' => {
      'windows' => 'the result includes the process id',
      'other'   => 'the result includes the process id'
    },
    'input' => ['ps', '-p', $$],
    'expect' => {
      'windows' => 'ps -p #{$$}',
      'other'   => 'ps -p #{$$}'
    }
  }
]
    
            # this command is also sent on macOS Sierra and we need to allow it or else the test will fail
        allowed_command = 'security set-key-partition-list -S apple-tool:,apple: -k #{''.shellescape} #{Dir.home}/Library/Keychains/login.keychain &> /dev/null'
    
        def assert_index(index)
      i = index.is_a?(Integer) ? index : @filters.index(filter_const(index))
      raise 'No such filter to insert: #{index}' unless i
      i
    end
  end
end

    
        def process_response(response)
      data = {}
      html, title = parse(response)
      context = pipeline_context(response)
      context[:html_title] = title
      pipeline.call(html, context, data)
      data
    end
    
            css('pre.no-bg-with-indent').each do |node|
          node.content = '  ' + node.content.gsub('\n', '\n  ')
        end
    
          def other
        css('#example', '.example', '#description_source', '#description_demo', '[id$='example']', 'hr').remove
    
      caveats <<~EOS
    Installation or Uninstallation may fail with Exit Code 19 (Conflicting Processes running) if Browsers, Safari Notification Service or SIMBL Services (e.g. Flashlight) are running or Adobe Creative Cloud or any other Adobe Products are already installed. See Logs in /Library/Logs/Adobe/Installers if Installation or Uninstallation fails, to identifify the conflicting processes.
  EOS
end

    
      if config.log_to.include? 'file'
    # Configure an appender that will write log events to a file.
    if AppConfig.environment.logging.logrotate.enable?
      # The file will be rolled on a daily basis, and the rolled files will be kept
      # the configured number of days. Older files will be deleted. The default pattern
      # layout is used when formatting log events into strings.
      Logging.appenders.rolling_file('file',
                                     filename:      config.paths['log'].first,
                                     keep:          AppConfig.environment.logging.logrotate.days.to_i,
                                     age:           'daily',
                                     truncate:      false,
                                     auto_flushing: true,
                                     layout:        layout
                                    )
    else
      # No file rolling, use logrotate to roll the logfile.
      Logging.appenders.file('file',
                             filename:      config.paths['log'].first,
                             truncate:      false,
                             auto_flushing: true,
                             layout:        layout
                            )
    end
  end
    
        remove_duplicates
    remove_index :share_visibilities, name: :shareable_and_user_id
    add_index :share_visibilities, %i(shareable_id shareable_type user_id), name: :shareable_and_user_id, unique: true
    
    Then /^I should see an image in the publisher$/ do
  photo_in_publisher.should be_present
end
    
    module NavigationHelpers
  def path_to(page_name)
    case page_name
    when /^person_photos page$/
      person_photos_path(@me.person)
    when /^the home(?: )?page$/
      stream_path
    when /^the mobile path$/
      force_mobile_path
    when /^the user applications page$/
      api_openid_connect_user_applications_path
    when /^the tag page for '([^\']*)'$/
      tag_path(Regexp.last_match(1))
    when /^its ([\w ]+) page$/
      send('#{Regexp.last_match(1).gsub(/\W+/, '_')}_path', @it)
    when /^the mobile ([\w ]+) page$/
      public_send('#{Regexp.last_match(1).gsub(/\W+/, '_')}_path', format: 'mobile')
    when /^the ([\w ]+) page$/
      public_send('#{Regexp.last_match(1).gsub(/\W+/, '_')}_path')
    when /^my edit profile page$/
      edit_profile_path
    when /^my profile page$/
      person_path(@me.person)
    when /^my acceptance form page$/
      invite_code_path(InvitationCode.first)
    when /^the requestors profile$/
      person_path(Request.where(recipient_id: @me.person.id).first.sender)
    when /^'([^\']*)''s page$/
      p = User.find_by_email(Regexp.last_match(1)).person
      {path:         person_path(p),
       # '#diaspora_handle' on desktop, '.description' on mobile
       special_elem: {selector: '#diaspora_handle, .description', text: p.diaspora_handle}
      }
    when /^'([^\']*)''s photos page$/
      p = User.find_by_email(Regexp.last_match(1)).person
      person_photos_path p
    when /^my account settings page$/
      edit_user_path
    when /^forgot password page$/
      new_user_password_path
    when %r{^'(/.*)'}
      Regexp.last_match(1)
    else
      raise 'Can't find mapping from \'#{page_name}\' to a path.'
    end
  end
    
      class SendPrivate < Base
    def perform(*_args)
      # don't federate in cucumber
    end
  end
    
      describe '#new' do
    before do
      sign_in alice, scope: :user
    end
    
      end
    
          FactoryGirl.create(:notification, :recipient => alice)
      note = FactoryGirl.create(:notification, :recipient => user2)
    
          it_behaves_like 'on a visible post'
    end