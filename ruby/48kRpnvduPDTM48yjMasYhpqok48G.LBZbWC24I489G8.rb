      handle_unknown_error!(e)
    end
    
          it 'handles the extensions parameter with no elements correctly' do
        result = Fastlane::FastFile.new.parse('lane :test do
          ensure_no_debug_code(text: 'pry', path: '.', extensions: [])
        end').runner.execute(:test)
        expect(result).to eq('grep -RE 'pry' '#{File.absolute_path('./')}'')
      end
    
        it 'shelljoins multiple args' do
      message = 'A message'
      command = command_from_args('git', 'commit', '-m', message)
      expect(command).to eq('git commit -m #{message.shellescape}')
    end
    
          if short_option
        UI.user_error!('short_option for key :#{key} must of type String') unless short_option.kind_of?(String)
        UI.user_error!('short_option for key :#{key} must be a string of length 1') unless short_option.delete('-').length == 1
      end
    
            FastlaneCore::CertChecker.wwdr_certificate_installed?
      end
    
    puts('[WARNING] You are calling #{tool_name} directly. Usage of the tool name without the `fastlane` prefix is deprecated in fastlane 2.0'.yellow)
puts('Please update your scripts to use `fastlane #{tool_name} #{full_params}` instead.'.yellow)
    
    module Gitlab
  module GithubImport
    module Importer
      class DiffNotesImporter
        include ParallelScheduling
    
    module Gitlab
  module GithubImport
    module Importer
      class IssuesImporter
        include ParallelScheduling
    
              issue.label_names.each do |label_name|
            # Although unlikely it's technically possible for an issue to be
            # given a label that was created and assigned after we imported all
            # the project's labels.
            next unless (label_id = label_finder.id_for(label_name))
    
    module Gitlab
  module GithubImport
    # IssuableFinder can be used for caching and retrieving database IDs for
    # issuable objects such as issues and pull requests. By caching these IDs we
    # remove the need for running a lot of database queries when importing
    # GitHub projects.
    class IssuableFinder
      attr_reader :project, :object
    
        puts('No plugin updated') if update_count.zero?
  end
    
              it 'allow to install a specific version' do
            command = logstash.run_command_in_path('bin/logstash-plugin install --no-verify --version 0.1.0 logstash-filter-qatest')
            expect(command).to install_successfully
            expect(logstash).to have_installed?('logstash-filter-qatest', '0.1.0')
          end
        end
      end
    
        let(:plugin_name) { 'logstash-filter-qatest' }
    let(:previous_version) { '0.1.0' }
    
    module Jekyll
    
      # The Site class is a built-in Jekyll class with access to global site config information.
  class Site
    
          get_web_content(redirected_url)
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