
        
            def no_subcommand(args)
      unless args.empty? ||
          args.first !~ %r(!/^--/!) || %w(--help --version).include?(args.first)
        deprecation_message 'Jekyll now uses subcommands instead of just switches. \
                          Run `jekyll help` to find out more.'
        abort
      end
    end
    
        @notification_setting = current_user.notification_settings_for(resource)
    @saved = @notification_setting.update_attributes(notification_setting_params)
    
        projects << @user.personal_projects.visible_to_user(current_user) if current_user
    projects << @user.personal_projects.public_to_user(current_user)
    
    unless dups.empty?
  puts '\nDuplicate links:'
  dups.each do |link|
    puts '- #{link}'
    puts `grep -nr '#{link}' README.md`
  end
  puts '\nDone with errors.'
  exit(1)
end
    
    unless invalids.empty?
  puts '\n\nFailed links:'
  invalids.each do |link|
    puts '- #{link}'
  end
  puts 'Done with errors.'
  exit(1)
end
    
        def process_response?(response)
      response.body.present?
    end
    
            css('code').each do |node|
          node.inner_html = node.inner_html.squish
        end
    
            %w(modals dropdowns scrollspy tabs tooltips popovers alerts buttons collapse carousel affix).each do |dom_id|
          css('##{dom_id}-options + p + div tbody td:first-child').each do |node|
            name = node.content.strip
            id = node.parent['id'] = '#{dom_id}-#{name.parameterize}-option'
            name.prepend '#{dom_id.singularize.titleize}: '
            name << ' (option)'
            entries << [name, id]
          end
    
    module Capistrano
  module Doctor
    # Prints table of all Capistrano-related gems and their version numbers. If
    # there is a newer version of a gem available, call attention to it.
    class GemsDoctor
      include Capistrano::Doctor::OutputHelpers
    
          # Override `Kernel#puts` to prepend four spaces to each line.
      def puts(string=nil)
        $stdout.puts(string.to_s.gsub(/^/, '    '))
      end
    
        def ensure_stage
      Rake::Task.define_task(:ensure_stage) do
        unless stage_set?
          puts t(:stage_not_set)
          exit 1
        end
      end
    end
    
      desc 'Finished'
  task :finished do
  end
    
        it 'sets the backend pty' do
      expect(backend.pty).to be_truthy
    end