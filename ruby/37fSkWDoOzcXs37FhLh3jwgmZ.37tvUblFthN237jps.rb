
        
              command = ['git describe']
      command << '--tags' if match_lightweight
      command << '`git rev-list --tags#{tag_pattern_param} --max-count=1`'
      Actions.sh(command.compact.join(' '), log: false).chomp
    rescue
      nil
    end
    
            expect(result).to eq('/usr/local/bin/cloc  --by-file --xml  --out=build/cloc.xml')
      end
    
          it 'gets the correct version number for 'SampleProject_tests'' do
        result = Fastlane::FastFile.new.parse('lane :test do
          get_version_number(xcodeproj: '.xcproject', target: 'SampleProject_tests')
        end').runner.execute(:test)
        expect(result).to eq('1.0')
      end
    
      # Finds the projects '@user' contributed to, limited to either public projects
  # or projects visible to the given user.
  #
  # current_user - When given the list of the projects is limited to those only
  #                visible by this user.
  #
  # Returns an ActiveRecord::Relation.
  def execute(current_user = nil)
    segments = all_projects(current_user)
    
    unless dups.empty?
  puts '\nDuplicate links:'
  dups.each do |link|
    puts '- #{link}'
    puts `grep -nr '#{link}' README.md`
  end
  puts '\nDone with errors.'
  exit(1)
end
    
    module Docs
  class URL < URI::Generic
    PARSER = URI::Parser.new
    
          def merge!(other)
        other.each do |key, value|
          self[convert_key(key)] = value
        end
        self
      end
    
          # This returns the keys (or ids) that are in the string.
      #
      # @return [<Array<String>]
      def keys
        regexp = /^#\s*VAGRANT-BEGIN:\s*(.+?)$\r?\n?(.*)$\r?\n?^#\s*VAGRANT-END:\s(\1)$/m
        @value.scan(regexp).map do |match|
          match[0]
        end
      end
    
            def initialize(argv)
          @pod_name = argv.shift_argument
          @short_output = argv.flag?('short')
          super
        end
    
          def stack
        UI::ErrorReport.stack
      end
    
            tests.each do |test|
          target_module << '\n  target '#{test.name.gsub(/'/, '\\\\\'')}' do\n'
          target_module << '    inherit! :search_paths\n'
          target_module << template_contents(config.default_test_podfile_path, '    ', 'Pods for testing')
          target_module << '\n  end\n'
        end
    
            def initialize(argv)
          @name = argv.shift_argument
          @template_url = argv.option('template-url', TEMPLATE_REPO)
          super
          @additional_args = argv.remainder!
        end
    
          def update_if_necessary!
        if @update && config.verbose?
          UI.section('\nUpdating Spec Repositories\n'.yellow) do
            Repo.new(ARGV.new(['update'])).run
          end
        end
      end
    
          locations = Array.new
      while (data.code.to_i == 301 || data.code.to_i == 302)
        data = handle_gist_redirecting(data)
        break if locations.include? data.header['Location']
        locations << data.header['Location']
      end
    
      # Extracts raw content DIV from template, used for page description as {{ content }}
  # contains complete sub-template code on main page level
  def raw_content(input)
    /<div class='entry-content'>(?<content>[\s\S]*?)<\/div>\s*<(footer|\/article)>/ =~ input
    return (content.nil?) ? input : content
  end
    
        def render(context)
      output = super
      types = {
        '.mp4' => 'type='video/mp4; codecs=\'avc1.42E01E, mp4a.40.2\''',
        '.ogv' => 'type='video/ogg; codecs=theora, vorbis'',
        '.webm' => 'type='video/webm; codecs=vp8, vorbis''
      }
      if @videos.size > 0
        video =  '<video #{sizes} preload='metadata' controls #{poster}>'
        @videos.each do |v|
          video << '<source src='#{v}' #{types[File.extname(v)]}>'
        end
        video += '</video>'
      else
        'Error processing input, expected syntax: {% video url/to/video [url/to/video] [url/to/video] [width height] [url/to/poster] %}'
      end
    end
    
        # Returns the fingerprint of the file, if one's defined. The fingerprint is
    # stored in the <attachment>_fingerprint attribute of the model.
    def fingerprint
      instance_read(:fingerprint)
    end
    
        def definitions_for(klass)
      parent_classes = klass.ancestors.reverse
      parent_classes.each_with_object({}) do |ancestor, inherited_definitions|
        inherited_definitions.deep_merge! @attachments[ancestor]
      end
    end
  end
end

    
          @klass.send :define_method, @name do |*args|
        ivar = '@attachment_#{name}'
        attachment = instance_variable_get(ivar)
    
            private
    
              add_offense(node)
        end
    
            private
    
            def on_def(node)
          _method, arguments, = *node
          arguments = *arguments
    
            def autocorrect(node)
          lambda do |corrector|
            corrector.remove(node.loc.dot)
            corrector.remove(node.loc.selector)
          end
        end