
        
            You can install it using Cask:
    
      def internal_commands
    find_internal_commands HOMEBREW_LIBRARY_PATH/'cmd'
  end
    
      def hardware
    'CPU: #{Hardware.cores_as_words}-core #{Hardware::CPU.bits}-bit #{Hardware::CPU.family}'
  end
    
    # See browser for an example
class GithubGistFormula < ScriptFileFormula
  def self.url(val)
    super
    version File.basename(File.dirname(val))[0, 6]
  end
end
    
      end
    
        context 'only newlines' do
      let(:keywords) { 'One\nTwo\r\nThree\nFour Token\n' }
    
          it 'does switch to plain text when xml is toggled off' do
        result = Fastlane::FastFile.new.parse('lane :test do
            cloc(xml: false)
          end').runner.execute(:test)
    
        html_filters.push 'haxe/clean_html', 'haxe/entries'
    
            css('.toplang', '#quickview', '.top').remove
    
    if (ip == nil || port == nil)
  puts 'Syntax: test.rb <ip> [port]\n'
  exit
end
    
    #Rjb::load('.', jvmargs=[])
Rjb::load('#{ENV['JAVA_HOME']}/lib/tools.jar:.',jvmargs=[])
    
    

    
      def parse
    @result = ERB.new(@template).result(binding)
  end
    
          respond_with do |format|
        format.html { redirect_to admin_pods_path }
        format.json { render json: PodPresenter.new(pod).as_json }
      end
    end
  end
end

    
    class Profile
  def pod_bin
    File.expand_path('../pod', __FILE__)
  end
    
            self.arguments = [
          CLAide::Argument.new('NAME', false),
        ]
    
            self.summary = 'The repl listens to commands on standard input'
        self.description = <<-DESC
          The repl listens to commands on standard input and prints their
          result to standard output.
          It accepts all the other ipc subcommands. The repl will signal the
          end of output with the the ASCII CR+LF `\\n\\r`.
        DESC
    
                report.pods_by_warning.each do |message, versions_by_name|
              UI.puts '-> #{message}'.yellow
              versions_by_name.each { |name, versions| UI.puts '  - #{name} (#{versions * ', '})' }
              UI.puts
            end
    
            def should_be_unused?
          name.to_s.start_with?('_')
        end
    
            def on_send(node)
          return unless match_call?(node) &&
                        (!node.value_used? || only_truthiness_matters?(node)) &&
                        !(node.parent && node.parent.block_type?)
    
              it 'autocorrects the offenses' do
            new_source = autocorrect_source(source)
            expect(new_source).to eq(<<-RUBY.strip_indent)
              #{type} Parent
                #{type} SomeObject
                  include Something