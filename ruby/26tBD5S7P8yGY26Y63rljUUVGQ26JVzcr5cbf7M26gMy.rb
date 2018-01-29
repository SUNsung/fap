
        
              # merge all chunks
      HandleChunkUpload.merge_chunks(chunks, upload_path: backup_path, tmp_upload_path: tmp_backup_path, model: Backup, identifier: identifier, filename: filename, tmp_directory: tmp_directory)
    end
    
      # any user that is either a moderator or an admin
  def staff?
    admin || moderator
  end
    
              # Built-in events
          if node['id'] == 'Events-catalog'
            node.next_element.css('li').each do |li|
              name = '#{li.at_css('b').content.delete(''').strip} event'
              id = name.parameterize
              li['id'] = id
              entries << [name, id, type] unless name == entries.last[0]
            end
            next
          end
    
            %w(modals dropdowns scrollspy tabs tooltips popovers alerts buttons collapse carousel affix).each do |dom_id|
          css('##{dom_id}-options + p + div tbody td:first-child').each do |node|
            name = node.content.strip
            id = node.parent['id'] = '#{dom_id}-#{name.parameterize}-option'
            name.prepend '#{dom_id.singularize.titleize}: '
            name << ' (option)'
            entries << [name, id]
          end
    
      def teardown
    rbconfig0 = @rbconfig
    mkconfig0 = @mkconfig
    RbConfig.module_eval {
      remove_const(:CONFIG)
      const_set(:CONFIG, rbconfig0)
      remove_const(:MAKEFILE_CONFIG)
      const_set(:MAKEFILE_CONFIG, mkconfig0)
    }
    MakeMakefile.class_eval {
      remove_const(:CONFIG)
      const_set(:CONFIG, mkconfig0)
    }
    Logging.quiet = @quiet
    Logging.log_close
    FileUtils.rm_f('mkmf.log')
    Dir.chdir(@curdir)
    FileUtils.rm_rf(@tmpdir)
  end
    
      def pipeline_run(cmds, pipeline_opts, child_io, parent_io) # :nodoc:
    if cmds.empty?
      raise ArgumentError, 'no commands'
    end
    
    # Testing 'c'
      [ '%3c', 'abc', [ 'abc' ] ],
      [ '%3c', 'a\nb', [ 'a\nb' ] ],
      [ '%3c', 'a\nbcd', [ 'a\nb' ] ],
      [ '%c\n\n', 'x\n\n', [ 'x' ] ],
      [ '%c', '\n', [ '\n' ] ],
      [ '%c', 'x\n', [ 'x' ] ],
      [ '%2c', ' 123', [' 1'] ],
      [ ' %c', ' x', ['x'] ],
      [ '%c', ' x', [' '] ],
      [ '%c', '123', ['1'] ],
      [ '%2c', '123', ['12'] ],
      [ '%5c', 'a\nb\n\n', [ 'a\nb\n\n' ] ],
      [ '%6c', 'a\nb\n\nx', [ 'a\nb\n\nx' ] ],
      [ '%5c', 'ab\ncd', [ 'ab\ncd' ] ],
    
        assert_equal(false, IPAddr.new('172.15.255.255').private?)
    assert_equal(true,  IPAddr.new('172.16.0.0').private?)
    assert_equal(true,  IPAddr.new('172.31.255.255').private?)
    assert_equal(false, IPAddr.new('172.32.0.0').private?)
    
            f = Zlib::GzipWriter.open(t.path)
        begin
          f.print('bar')
        ensure
          f.close
        end
        assert_equal('bar', Zlib::GzipReader.open(t.path) {|gz| gz.read })
    
    Given an Application (app) bundle directory on disk, find all
login items associated with that app, which you can use in a
Cask uninstall stanza, eg
    
    module Admin
  class PodsController < AdminController
    respond_to :html, :json, :mobile
    
      def percent_change(today, yesterday)
    sprintf( '%0.02f', ((today-yesterday) / yesterday.to_f)*100).to_f
  end
    
          def destroy
        authorization = Api::OpenidConnect::Authorization.find_by(id: params[:id])
        if authorization
          authorization.destroy
        else
          flash[:error] = I18n.t('api.openid_connect.authorizations.destroy.fail', id: params[:id])
        end
        redirect_to api_openid_connect_user_applications_url
      end
    
          def get_key_from_kid(keys, kid)
        keys.each do |key|
          return key if key.has_value?(kid)
        end
      end
    
    # A logger that delays messages until they're explicitly flushed to an inner
# logger.
#
# This can be installed around the current logger by calling \{#install!}, and
# the original logger can be replaced by calling \{#uninstall!}. The log
# messages can be flushed by calling \{#flush}.
class Sass::Logger::Delayed < Sass::Logger::Base
  # Installs a new delayed logger as the current Sass logger, wrapping the
  # original logger.
  #
  # This can be undone by calling \{#uninstall!}.
  #
  # @return [Sass::Logger::Delayed] The newly-created logger.
  def self.install!
    logger = Sass::Logger::Delayed.new(Sass.logger)
    Sass.logger = logger
    logger
  end
    
    module Sass
  # Runs a SassScript read-eval-print loop.
  # It presents a prompt on the terminal,
  # reads in SassScript expressions,
  # evaluates them,
  # and prints the result.
  class Repl
    # @param options [{Symbol => Object}] An options hash.
    def initialize(options = {})
      @options = options
    end
    
              If there is multiple cache for various versions of the requested pod,
          you will be asked which one to clean. Use `--all` to clean them all.
    
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
