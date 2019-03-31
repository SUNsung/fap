
        
        PROFILE_ERB_TEMPLATE = <<-EOS
(version 1)
(debug allow)
    
    Then(/^file symlinks are created in the new release$/) do
  TestApp.linked_files.each do |file|
    run_vagrant_command(test_symlink_exists(TestApp.current_path.join(file)))
  end
end
    
      def symlinked?(symlink_path, target_path)
    '[ #{symlink_path} -ef #{target_path} ]'
  end
    
      class VagrantSSHCommandError < RuntimeError; end
    
        def name
      'cap'
    end
    
          def question
        if default.nil?
          I18n.t(:question, key: key, scope: :capistrano)
        else
          I18n.t(:question_default, key: key, default_value: default, scope: :capistrano)
        end
      end
    
          def warn_add_git_to_capfile
        $stderr.puts(<<-MESSAGE)
[Deprecation Notice] Future versions of Capistrano will not load the Git SCM
plugin by default. To silence this deprecation warning, add the following to
your Capfile after `require 'capistrano/deploy'`: