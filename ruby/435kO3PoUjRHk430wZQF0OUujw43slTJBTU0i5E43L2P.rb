
        
        def site_configuration(overrides = {})
  build_configs({
    'source'      => source_dir,
    'destination' => dest_dir
  }, build_configs(overrides))
end
    
    unless File.exist?(PROF_OUTPUT_FILE)
  StackProf.run(
    mode: MODE.to_sym,
    interval: 100,
    raw: true,
    out: PROF_OUTPUT_FILE
  ) do
    puts 'GC Stats:', JSON.pretty_generate(GC.stat)
    GC.disable
    
      Jekyll::External.require_if_present(Jekyll::External.blessed_gems) do |g, ver_constraint|
    cmd = g.split('-').last
    p.command(cmd.to_sym) do |c|
      c.syntax cmd
      c.action do
        Jekyll.logger.abort_with 'You must install the '#{g}' gem' \
          ' version #{ver_constraint} to use the 'jekyll #{cmd}' command.'
      end
    end
  end
    
        def defaults_deprecate_type(old, current)
      Jekyll.logger.warn 'Defaults:', 'The '#{old}' type has become '#{current}'.'
      Jekyll.logger.warn 'Defaults:', 'Please update your front-matter defaults to use \
                        'type: #{current}'.'
    end
  end
end

    
    module Jekyll
  class EntryFilter
    attr_reader :site
    SPECIAL_LEADING_CHARACTERS = [
      '.', '_', '#', '~',
    ].freeze
    
        # Gets the name of this layout.
    attr_reader :name
    
        # Assign additional cores to the guest OS.
    v.customize ['modifyvm', :id, '--cpus', cpu_count]
    v.customize ['modifyvm', :id, '--ioapic', 'on']
    
      def revoke_moderation!
    set_permission('moderator', false)
  end
    
          # Returns the full path to the template, taking into accoun the gem directory
      # and adding the `.erb` extension to the end.
      #
      # @return [String]
      def full_template_path
        @template_root.join('#{template}.erb').to_s.squeeze('/')
      end
    end
  end
end

    
    namespace :db do
  namespace :migrate do
    desc 'Setup the db or migrate depending on state of db'
    task setup: :environment do
      begin
        if ActiveRecord::Migrator.current_version.zero?
          Rake::Task['db:migrate'].invoke
          Rake::Task['db:seed'].invoke
        end
      rescue ActiveRecord::NoDatabaseError
        Rake::Task['db:setup'].invoke
      else
        Rake::Task['db:migrate'].invoke
      end
    end
  end
    
        if object.conversation.uri?
      object.conversation.uri
    else
      OStatus::TagManager.instance.unique_tag(object.conversation.created_at, object.conversation.id, 'Conversation')
    end
  end