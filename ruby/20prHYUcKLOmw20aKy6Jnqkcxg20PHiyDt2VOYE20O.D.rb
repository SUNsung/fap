
        
                cmd << ['-am #{message.shellescape}']
        cmd << '--force' if options[:force]
        cmd << '-s' if options[:sign]
        cmd << tag.shellescape
        cmd << options[:commit].to_s if options[:commit]
    
          it 'allows you to specify grouping and build number' do
        specified_build_number = 42
        grouping = 'grouping'
    
            expect(result).to eq('appledoc --project-name \'Project Name\' --project-company \'Company\' --warn-missing-output-path --warn-missing-company-id --warn-undocumented-object --exit-threshold \'2\' input/dir')
      end
    
            expect(result.size).to eq(4)
        expect(result[0]).to eq('security create-keychain -p testpassword ~/Library/Keychains/test.keychain')
    
          it 'handles the extensions parameter with multiple elements correctly' do
        result = Fastlane::FastFile.new.parse('lane :test do
          ensure_no_debug_code(text: 'pry', path: '.', extensions: ['m', 'h'])
        end').runner.execute(:test)
        expect(result).to eq('grep -RE 'pry' '#{File.absolute_path('./')}' --include=\\*.{m,h}')
      end
    
          return value # fallback to not doing anything
    end
    
          it 'should not be fooled by 10 local code signing identities available' do
        allow(FastlaneCore::CertChecker).to receive(:wwdr_certificate_installed?).and_return(true)
        allow(FastlaneCore::CertChecker).to receive(:list_available_identities).and_return('     10 valid identities found\n')
        expect(FastlaneCore::UI).not_to(receive(:error))
    
        describe 'import' do
      it 'finds a normal keychain name relative to ~/Library/Keychains' do
        expected_command = 'security import item.path -k '#{Dir.home}/Library/Keychains/login.keychain' -P #{''.shellescape} -T /usr/bin/codesign -T /usr/bin/security &> /dev/null'
    
              issue.label_names.each do |label_name|
            # Although unlikely it's technically possible for an issue to be
            # given a label that was created and assigned after we imported all
            # the project's labels.
            next unless (label_id = label_finder.id_for(label_name))
    
            def id_for_already_imported_cache(note)
          note.id
        end
      end
    end
  end
end

    
    module Gitlab
  module GithubImport
    # IssuableFinder can be used for caching and retrieving database IDs for
    # issuable objects such as issues and pull requests. By caching these IDs we
    # remove the need for running a lot of database queries when importing
    # GitHub projects.
    class IssuableFinder
      attr_reader :project, :object
    
      it 'accepts a Float' do
    sleep(0.1).should be_close(0, 2)
  end
    
      it 'sets the tainted bit' do
    o = Object.new
    o.taint
    o.tainted?.should == true
  end
    
        it 'returns the time at which the file was modified when passed ?M' do
      Kernel.test(?M, @tmp_file).should == @tmp_file.mtime
    end
  end
    
    require 'open-uri'
require 'json'
require 'strscan'
require 'forwardable'
require 'term/ansicolor'
require 'fileutils'
    
        def get_trees
      @trees ||= get_tree(@branch_sha)
    end
    
      # Full error reports are disabled and caching is turned on.
  config.consider_all_requests_local       = false
  config.action_controller.perform_caching = true
    
        def render(context)
      quote = paragraphize(super)
      author = '<strong>#{@by.strip}</strong>' if @by
      if @source
        url = @source.match(/https?:\/\/(.+)/)[1].split('/')
        parts = []
        url.each do |part|
          if (parts + [part]).join('/').length < 32
            parts << part
          end
        end
        source = parts.join('/')
        source << '/&hellip;' unless source == @source
      end
      if !@source.nil?
        cite = ' <cite><a href='#{@source}'>#{(@title || source)}</a></cite>'
      elsif !@title.nil?
        cite = ' <cite>#{@title}</cite>'
      end
      blockquote = if @by.nil?
        quote
      elsif cite
        '#{quote}<footer>#{author + cite}</footer>'
      else
        '#{quote}<footer>#{author}</footer>'
      end
      '<blockquote>#{blockquote}</blockquote>'
    end
    
          get_web_content(redirected_url)
    end
    
          rtn = ''
      (context.environments.first['site'][@array_name] || []).each do |file|
        if file !~ /^[a-zA-Z0-9_\/\.-]+$/ || file =~ /\.\// || file =~ /\/\./
          rtn = rtn + 'Include file '#{file}' contains invalid characters or sequences'
        end
    
    Given /^I run a migration$/ do
  step %[I successfully run `rake db:migrate --trace`]
end
    
        def type_from_file_contents
      type_from_mime_magic || type_from_file_command
    rescue Errno::ENOENT => e
      Paperclip.log('Error while determining content type: #{e}')
      SENSIBLE_DEFAULT
    end