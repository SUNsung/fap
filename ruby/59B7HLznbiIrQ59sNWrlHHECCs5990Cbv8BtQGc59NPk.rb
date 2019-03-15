
        
              context 'when file paths contain spaces' do
        it 'escapes spaces in output and config file paths' do
          output_file = 'output path with spaces.txt'
          config_file = '.config file with spaces.yml'
          result = Fastlane::FastFile.new.parse('lane :test do
            swiftlint(
              output_file: '#{output_file}',
              config_file: '#{config_file}'
            )
          end').runner.execute(:test)
    
        # [Boolean] Set if the variable is sensitive, such as a password or API token, to prevent echoing when prompted for the parameter
    # If a default value exists, it won't be used during code generation as default values can read from environment variables.
    attr_accessor :sensitive
    
          expect(escaped).to eq(testcase['expect'][os])
      confirm_shell_unescapes_string_correctly(str, escaped)
    end
  end
end
    
    if git.modified_files.include?('snapshot/lib/assets/SnapshotHelper.swift')
  warn('You modified `SnapshotHelper.swift`, make sure to update the version number at the bottom of the file to notify users about the new helper file.')
end
    
          redirect_to admin_account_path(@account.id), notice: I18n.t('admin.accounts.change_email.changed_msg')
    end
    
      private
    
      private
    
      def verify_payload?
    payload.present? && VerifySalmonService.new.call(payload)
  end
    
    describe BuildEnvironment do
  alias_matcher :use_userpaths, :be_userpaths
    
        $Kernel_trace_var_extra.should == true
  end
    
      it 'creates a public method in script binding' do
    eval @code, script_binding
    Object.should have_method :boom
  end
    
      def remove_duplicates
    where = 'WHERE s1.user_id = s2.user_id AND s1.shareable_id = s2.shareable_id AND '\
      's1.shareable_type = s2.shareable_type AND s1.id > s2.id'
    if AppConfig.postgres?
      execute('DELETE FROM share_visibilities AS s1 USING share_visibilities AS s2 #{where}')
    else
      execute('DELETE s1 FROM share_visibilities s1, share_visibilities s2 #{where}')
    end
  end
end

    
        reversible(&method(:up_down))
  end
    
    When /^I fill out forgot password form with '([^']*)'$/ do |email|
  fill_forgot_password_form(email)
end
    
        it 'generates a jasmine fixture', :fixture => true do
      get :bookmarklet
      save_fixture(html_for('body'), 'bookmarklet')
    end
    
    # This is the version that ships with OS X 10.10, so be sure we test against it.
# At the same time, the 1.7.7 version won't install cleanly on Ruby > 2.2,
# so we use a fork that makes a trivial change to a macro invocation.
gem 'json', :git => 'https://github.com/segiddins/json.git', :branch => 'seg-1.7.7-ruby-2.2'
    
      get(/.+/) do
    send_sinatra_file(request.path) {404}
  end
    
        def initialize(tag_name, markup, tokens)
      attributes = ['class', 'src', 'width', 'height', 'title']
    
    Liquid::Template.register_tag('render_partial', Jekyll::RenderPartialTag)
