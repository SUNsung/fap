
        
              dt = Date.today
      freeze_time dt
    
    UserOption.where(user_id: -1).update_all(
  email_private_messages: false,
  email_direct: false
)
    
            last_simple_subject = rest.empty? && sseq.subject?
        if current_rule.nil? || first_sseq(current_rule).members != firsts ||
            !!first_sseq(current_rule).subject? != !!last_simple_subject
          current_rule = Tree::RuleNode.new([])
          current_rule.parsed_rules = make_sseq(last_simple_subject, *firsts)
        end
    
          files.map! do |from, to|
        to ||= from.gsub(/\.[^.]*?$/, '.css')
        sourcemap = Sass::Util.sourcemap_name(to) if @options[:sourcemap]
        [from, to, sourcemap]
      end
      dirs.map! {|from, to| [from, to || from]}
      Sass::Plugin.options[:template_location] = dirs
    
          # If this importer is based on files on the local filesystem This method
      # should return true if the file, when changed, should trigger a
      # recompile.
      #
      # It is acceptable for non-sass files to be watched and trigger a recompile.
      #
      # @param filename [String] The absolute filename for a file that has changed.
      # @return [Boolean] When the file changed should cause a recompile.
      def watched_file?(filename)
        false
      end
    end
  end
end

    
            sourcemap_pathname = Sass::Util.cleanpath(sourcemap_directory)
        begin
          Sass::Util.file_uri_from_path(
            Sass::Util.relative_path_from(file_pathname, sourcemap_pathname))
        rescue ArgumentError # when a relative path cannot be constructed
          Sass::Util.file_uri_from_path(file_pathname)
        end
      end
    
    Gem::Specification.new do |gem|
  gem.name          = 'capistrano'
  gem.version       = Capistrano::VERSION
  gem.authors       = ['Tom Clements', 'Lee Hambley']
  gem.email         = ['seenmyfate@gmail.com', 'lee.hambley@gmail.com']
  gem.description   = 'Capistrano is a utility and framework for executing commands in parallel on multiple remote machines, via SSH.'
  gem.summary       = 'Capistrano - Welcome to easy deployment with Ruby over SSH'
  gem.homepage      = 'http://capistranorb.com/'
    
    Given(/^file '(.*?)' does not exist in shared path$/) do |file|
  file_shared_path = TestApp.shared_path.join(file)
  run_vagrant_command('mkdir -p #{TestApp.shared_path}')
  run_vagrant_command('touch #{file_shared_path} && rm #{file_shared_path}')
end
    
      def test_symlink_exists(path)
    exists?('L', path)
  end
    
          def has_role?(role)
        roles.include? role.to_sym
      end