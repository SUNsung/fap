
        
          def process_status_params
    {
      uri: @object['id'],
      url: object_url || @object['id'],
      account: @account,
      text: text_from_content || '',
      language: detected_language,
      spoiler_text: @object['summary'] || '',
      created_at: @options[:override_timestamps] ? nil : @object['published'],
      reply: @object['inReplyTo'].present?,
      sensitive: @object['sensitive'] || false,
      visibility: visibility_from_audience,
      thread: replied_to_status,
      conversation: conversation_from_uri(@object['conversation']),
      media_attachment_ids: process_attachments.take(4).map(&:id),
    }
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
    
      attributes :id, :type, :url, :preview_url,
             :remote_url, :text_url, :meta,
             :description
    
      def initial_state_params
    {
      settings: {},
      token: current_session&.token,
    }
  end
end

    
        def puts(*args)
      STDERR.puts *args unless @silence
    end
    
      desc 'update main and version in bower.json'
  task :generate do
    require 'bootstrap-sass'
    Dir.chdir Bootstrap.gem_path do
      spec       = JSON.parse(File.read 'bower.json')
    
        # @return [Node] The SassScript within the interpolation
    attr_reader :mid
    
          def core_gem_names
        %w(capistrano airbrussh rake sshkit net-ssh) & Gem.loaded_specs.keys
      end
    
            rows.each do |row|
          line = row.values.each_with_index.map do |value, col|
            value.to_s.ljust(col_widths[col])
          end.join(' ').rstrip
          line = color.colorize(line, row.color) if row.color
          puts line
        end
      end
    
      mkdir_p tasks_dir