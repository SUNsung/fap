
        
                class RadioButtonBuilder < Builder # :nodoc:
          def radio_button(extra_html_options = {})
            html_options = extra_html_options.merge(@input_html_options)
            html_options[:skip_default_ids] = false
            @template_object.radio_button(@object_name, @method_name, @value, html_options)
          end
        end
    
    module AbstractController
  module Testing
    class ControllerWithHelpers < AbstractController::Base
      include AbstractController::Helpers
      include AbstractController::Rendering
      include ActionView::Rendering
    
        def root_url
      context[:root_url]
    end
    
    module Docs
  class Entry
    class Invalid < StandardError; end
    
      preflight do
    processes = system_command '/bin/launchctl', args: ['list']
    
    desc 'Deploy website via rsync'
task :rsync do
  exclude = ''
  if File.exists?('./rsync-exclude')
    exclude = '--exclude-from '#{File.expand_path('./rsync-exclude')}''
  end
  puts '## Deploying website via Rsync'
  ok_failed system('rsync -avze 'ssh -p #{ssh_port}' #{exclude} #{rsync_args} #{'--delete' unless rsync_delete == false} #{public_dir}/ #{ssh_user}:#{document_root}')
end
    
      def send_sinatra_file(path, &missing_file_block)
    file_path = File.join(File.dirname(__FILE__), 'public',  path)
    file_path = File.join(file_path, 'index.html') unless file_path =~ /\.[a-z]+$/i
    File.exist?(file_path) ? send_file(file_path) : missing_file_block.call
  end
    
      class RenderPartialTag < Liquid::Tag
    include OctopressFilters
    def initialize(tag_name, markup, tokens)
      @file = nil
      @raw = false
      if markup =~ /^(\S+)\s?(\w+)?/
        @file = $1.strip
        @raw = $2 == 'raw'
      end
      super
    end
    
        def sizes
      attrs = 'width='#{@sizes[0]}'' if @sizes[0]
      attrs += ' height='#{@sizes[1]}'' if @sizes[1]
      attrs
    end
  end
end