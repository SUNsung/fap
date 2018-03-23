
        
            def schedule_in(*args, &blk)
      schedule(:schedule_in, args, &blk)
    end
    
        respond_to do |format|
      format.html { redirect_to user_credentials_path }
      format.json { head :no_content }
    end
  end
    
        def doc_mtime(doc)
      [@store.mtime(doc.index_path).to_i, @store.mtime(doc.db_path).to_i].max
    end
    
            css('> .section', '#preamble', 'a[href*='dict.html']', 'code var', 'code strong').each do |node|
          node.before(node.children).remove
        end
    
    lib_path = root.join('lib').to_path
    
      fd.close
    
        cal = Hash.new
    cal[ver] = Hash.new
    
          def assert_valid_stage_names(names)
        invalid = names.find { |n| RESERVED_NAMES.include?(n) }
        return if invalid.nil?
    
        def default_tasks
      %w{install}
    end
    
      # Implemented by subclasses to provide default values for settings needed by
  # this plugin. Typically done using the `set_if_empty` Capistrano DSL method.
  #
  # Example:
  #
  #   def set_defaults
  #     set_if_empty :my_plugin_option, true
  #   end
  #
  def set_defaults; end
    
      entries.each do |entry|
    if File.exist?(entry[:file])
      warn '[skip] #{entry[:file]} already exists'
    else
      File.open(entry[:file], 'w+') do |f|
        f.write(ERB.new(File.read(entry[:template])).result(binding))
        puts I18n.t(:written_file, scope: :capistrano, file: entry[:file])
      end
    end
  end
    
      def command_line(*options)
    options.each { |opt| ARGV << opt }
    subject.define_singleton_method(:exit) do |*_args|
      throw(:system_exit, :exit)
    end
    subject.run
    subject.options
  end