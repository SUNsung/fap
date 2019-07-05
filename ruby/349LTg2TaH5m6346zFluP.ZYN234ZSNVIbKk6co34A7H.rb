
        
                def sidekiq_worker_class
          ImportNoteWorker
        end
    
          # Associates the given database ID with the current object.
      #
      # database_id - The ID of the corresponding database row.
      def cache_database_id(database_id)
        Caching.write(cache_key, database_id)
      end
    
            # attributes - A Hash containing the user details. The keys of this
        #              Hash (and any nested hashes) must be symbols.
        def initialize(attributes)
          @attributes = attributes
        end
      end
    end
  end
end

    
    $preload = %w[digest]
    
    # SUSv4
_PC_FILESIZEBITS
_PC_LINK_MAX
_PC_MAX_CANON
_PC_MAX_INPUT
_PC_NAME_MAX
_PC_PATH_MAX
_PC_PIPE_BUF
_PC_2_SYMLINKS
_PC_ALLOC_SIZE_MIN
_PC_REC_INCR_XFER_SIZE
_PC_REC_MAX_XFER_SIZE
_PC_REC_MIN_XFER_SIZE
_PC_REC_XFER_ALIGN
_PC_SYMLINK_MAX
_PC_CHOWN_RESTRICTED
_PC_NO_TRUNC
_PC_VDISABLE
_PC_ASYNC_IO
_PC_PRIO_IO
_PC_SYNC_IO
_PC_TIMESTAMP_RESOLUTION
    
          return [parent, message]
    end
    args = $mflags
    unless $destdir.to_s.empty? or $mflags.defined?('DESTDIR')
      args += ['DESTDIR=' + relative_from($destdir, '../'+prefix)]
    end
    if $static and ok and !$objs.empty? and !noinstall
      args += ['static']
      $extlist.push [(maybestatic ? $static : false), target, $target, $preload]
    end
    FileUtils.rm_f(old_cleanfiles - $distcleanfiles - $cleanfiles)
    FileUtils.rm_f(old_objs - $objs)
    if $static
      $extflags ||= ''
      $extlibs ||= []
      $extpath ||= []
      unless $mswin
        $extflags = split_libs($extflags, $DLDFLAGS, $LDFLAGS).uniq.join(' ')
      end
      $extlibs = merge_libs($extlibs, split_libs($libs, $LOCAL_LIBS).map {|lib| lib.sub(/\A\.\//, 'ext/#{target}/')})
      $extpath |= $LIBPATH
    end
  ensure
    Logging::log_close
    if rbconfig0
      RbConfig.module_eval {
	remove_const(:CONFIG)
	const_set(:CONFIG, rbconfig0)
	remove_const(:MAKEFILE_CONFIG)
	const_set(:MAKEFILE_CONFIG, mkconfig0)
      }
    end
    if mkconfig0
      MakeMakefile.class_eval {
	remove_const(:CONFIG)
	const_set(:CONFIG, mkconfig0)
      }
    end
    $top_srcdir = top_srcdir
    $topdir = topdir
    $hdrdir = hdrdir
    $static = static
    Dir.chdir dir
  end
  begin
    Dir.rmdir target
    target = File.dirname(target)
  rescue SystemCallError
    break
  end while true
  true
end
    
          @size = PackInfo.align(offset, max_align)
    end
    
          it 'it doesn't call toggle_hidden_shareable' do
        expect(@controller.current_user).not_to receive(:toggle_hidden_shareable).with(an_instance_of(StatusMessage))
        begin
          put :update, params: {id: 42, post_id: @status.id}, format: :js
        rescue ActiveRecord::RecordNotFound
        end
      end
    end
  end
end

    
            # Prints the list of specs & pod cache dirs for a single pod name.
        #
        # This output is valid YAML so it can be parsed with 3rd party tools
        #
        # @param [Array<Hash>] cache_descriptors
        #        The various infos about a pod cache. Keys are
        #        :spec_file, :version, :release and :slug
        #
        def print_pod_cache_infos(pod_name, cache_descriptors)
          UI.puts '#{pod_name}:'
          cache_descriptors.each do |desc|
            if @short_output
              [:spec_file, :slug].each { |k| desc[k] = desc[k].relative_path_from(@cache.root) }
            end
            UI.puts('  - Version: #{desc[:version]}')
            UI.puts('    Type:    #{pod_type(desc)}')
            UI.puts('    Spec:    #{desc[:spec_file]}')
            UI.puts('    Pod:     #{desc[:slug]}')
          end
        end
      end
    end
  end
end

    
            def execute_repl_command(repl_command)
          unless repl_command == '\n'
            repl_commands = repl_command.split
            subcommand = repl_commands.shift.capitalize
            arguments = repl_commands
            subcommand_class = Pod::Command::IPC.const_get(subcommand)
            subcommand_class.new(CLAide::ARGV.new(arguments)).run
            signal_end_of_output
          end
        end
      end
    end
  end
end

    
      gem.licenses      = ['MIT']
    
      def test_file_exists(path)
    exists?('f', path)
  end
    
          # Given a callable that provides a value, wrap the callable with another
      # object that responds to `call`. This new object will perform validation
      # and then return the original callable's value.
      #
      # If the callable is a `Question`, the object returned by this method will
      # also be a `Question` (a `ValidatedQuestion`, to be precise). This
      # ensures that `is_a?(Question)` remains true even after the validation
      # wrapper is applied. This is needed so that `Configuration#is_question?`
      # works as expected.
      #
      def assert_valid_later(key, callable)
        validation_callback = lambda do
          value = callable.call
          assert_valid_now(key, value)
          value
        end