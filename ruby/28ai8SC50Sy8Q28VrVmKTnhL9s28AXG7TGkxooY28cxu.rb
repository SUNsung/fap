
        
          def update
    @notification_setting = current_user.notification_settings.find(params[:id])
    @saved = @notification_setting.update_attributes(notification_setting_params)
    
      private
    
        delegate :empty?, :blank?, to: :pages
    
            css('.toplang', '#quickview', '.top').remove
    
      fd.close
    
              s[:pass] = ''
          return
        end
    
    meterp.sock.close

    
    filename = ARGV.shift || exit
    
    unless STDIN.tty?
	p = ::Parser.new('')
	p.parse
	p.dump_all
else
	print 'Tested with:\n'
	print '\tGNU objdump 2.9-aix51-020209\n'
	print '\tGNU objdump 2.15.92.0.2 20040927\n'
	print 'Usage: objdump -dM suffix <file(s)> | ruby objdumptoc.rb\n'
end

    
    (allow process-exec
  (literal
    '<%= pod_bin %>'
    '<%= ruby_bin %>'
  )
  (regex
<% prefixes.each do |prefix| %>
    #'^<%= prefix %>/*'
<% end %>
  )
)
    
            def self.options
          [[
            '--all', 'Remove all the cached pods without asking'
          ]].concat(super)
        end
    
            self.description = <<-DESC
          Shows the content of the pods cache as a YAML tree output, organized by pod.
          If `NAME` is given, only the caches for that pod will be included in the output.
        DESC
    
          def self.options
        [
          ['--update', 'Run `pod repo update` before listing'],
          ['--stats',  'Show additional stats (like GitHub watchers and forks)'],
        ].concat(super)
      end
    
    module Paperclip
  class << self
    attr_writer :registered_attachments_styles_path
    def registered_attachments_styles_path
      @registered_attachments_styles_path ||= Rails.root.join('public/system/paperclip_attachments.yml').to_s
    end
  end
    
      context 'called with arguments (1, $value: 2em)' do
    it 'outputs double the first value from the default scale' do
      expect('.one-base-two').to have_rule('font-size: 2.5em')
    end
  end