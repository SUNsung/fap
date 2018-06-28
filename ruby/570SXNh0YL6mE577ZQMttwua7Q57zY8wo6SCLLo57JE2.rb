
        
          module ClassMethods
    def setup_worker
      active.map do |agent|
        next unless agent.start_worker?
        self::Worker.new(id: agent.worker_id, agent: agent)
      end.compact
    end
  end
    
      def show
    respond_to do |format|
      format.html
      format.json { render json: @event }
    end
  end
    
      def apply
    data = contents.gsub('HOMEBREW_PREFIX', HOMEBREW_PREFIX)
    args = %W[-g 0 -f -#{strip}]
    Utils.popen_write('patch', *args) { |p| p.write(data) }
    raise ErrorDuringExecution.new('patch', args) unless $CHILD_STATUS.success?
  end
    
      def load_logs(dir)
    logs = {}
    if dir.exist?
      dir.children.sort.each do |file|
        contents = file.size? ? file.read : 'empty log'
        # small enough to avoid GitHub 'unicorn' page-load-timeout errors
        max_file_size = 1_000_000
        contents = truncate_text_to_approximate_size(contents, max_file_size, front_weight: 0.2)
        logs[file.basename.to_s] = { content: contents }
      end
    end
    raise 'No logs.' if logs.empty?
    logs
  end
    
          if File.directory?(source_entry)
        FileUtils.mkdir(target_entry) unless File.exists?(target_entry)
        transform_r(source_entry, target_entry)
      else
        # copy the new file, in case of being an .erb file should render first
        if source_entry.end_with?('erb')
          target_entry = target_entry.gsub(/.erb$/,'').gsub('example', name)
          File.open(target_entry, 'w') { |f| f.write(render(source_entry)) }
        else
          FileUtils.cp(source_entry, target_entry)
        end
        puts '\t create #{File.join(full_plugin_name, Pathname.new(target_entry).relative_path_from(Pathname.new(@target_path)))}'
      end
    end
  end
    
              def find_plugins_gem_specs
            @specs ||= ::Gem::Specification.find_all.select{|spec| logstash_plugin_gem_spec?(spec)}
          end