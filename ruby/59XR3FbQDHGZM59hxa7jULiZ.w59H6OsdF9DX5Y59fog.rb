
        
                platform_lanes.each do |lane_name, lane|
          all << [platform, lane_name].reject(&:nil?).join(' ') unless lane.is_private
        end
      end
      all
    end
    
    module Fastlane
  # Handles receiving commands from the socket server, finding the Action to be invoked,
  # invoking it, and returning any return values
  class SocketServerActionCommandExecutor < CommandExecutor
    attr_accessor :runner
    attr_accessor :actions_requiring_special_handling
    
            cmd << ['-am #{message.shellescape}']
        cmd << '--force' if options[:force]
        cmd << '-s' if options[:sign]
        cmd << tag.shellescape
        cmd << options[:commit].to_s if options[:commit]
    
          it 'handles the extensions parameter with multiple elements correctly' do
        result = Fastlane::FastFile.new.parse('lane :test do
          ensure_no_debug_code(text: 'pry', path: '.', extensions: ['m', 'h'])
        end').runner.execute(:test)
        expect(result).to eq('grep -RE 'pry' '#{File.absolute_path('./')}' --include=\\*.{m,h}')
      end
    
            it 'executes the correct git command' do
          allow(Fastlane::Actions).to receive(:sh).with('git add *.h *.m', anything).and_return('')
          result = Fastlane::FastFile.new.parse('lane :test do
            git_add(path: #{path}, shell_escape: false)
          end').runner.execute(:test)
        end
      end
    
        it 'raises when no argument passed' do
      expect do
        command_from_args
      end.to raise_error(ArgumentError)
    end
    
    exec_arr = ['fastlane', tool_name] + ARGV
    
      def prefixes
    prefixes = ['/bin', '/usr/bin', '/usr/libexec', xcode_app_path]
    prefixes << `brew --prefix`.strip unless `which brew`.strip.empty?
    
          private
    
    Liquid::Template.register_tag('gist', Jekyll::GistTag)
Liquid::Template.register_tag('gistnocache', Jekyll::GistTagNoCache)

    
    Liquid::Template.register_tag('img', Jekyll::ImageTag)

    
            Dir.chdir(includes_dir) do
          choices = Dir['**/*'].reject { |x| File.symlink?(x) }
          if choices.include?(file)
            source = File.read(file)
            partial = Liquid::Template.parse(source)
            context.stack do
              rtn = rtn + partial.render(context)
            end
          else
            rtn = rtn + 'Included file '#{file}' not found in _includes directory'
          end
        end
      end
      rtn
    end
  end
    
    class PaperclipGenerator < ActiveRecord::Generators::Base
  desc 'Create a migration to add paperclip-specific fields to your model. ' +
       'The NAME argument is the name of your model, and the following ' +
       'arguments are the name of the attachments'
    
    # The base module that gets included in ActiveRecord::Base. See the
# documentation for Paperclip::ClassMethods for more useful information.
module Paperclip
  extend Helpers
  extend Logger
  extend ProcessorHelpers
    
        def self.names_for(klass)
      instance.names_for(klass)
    end