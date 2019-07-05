
        
        if pathutil_relative == native_relative
  Benchmark.ips do |x|
    x.report('pathutil') { pathutil_relative }
    x.report('native')   { native_relative }
    x.compare!
  end
else
  print 'PATHUTIL: '
  puts pathutil_relative
  print 'NATIVE:   '
  puts native_relative
end

    
          CHARS = {
        :failed    => '\u2718'.red,
        :pending   => '\u203D'.yellow,
        :undefined => '\u2718'.red,
        :passed    => '\u2714'.green,
        :skipped   => '\u203D'.blue,
      }.freeze
    
                  EM.start_server(
                opts['host'],
                opts['livereload_port'],
                HttpAwareConnection,
                opts
              ) do |ws|
                handle_websockets_event(ws)
              end
    
          def jekyll
        JekyllDrop.global
      end
    
            @parallel = parallel
      end
    
            def sidekiq_worker_class
          ImportDiffNoteWorker
        end
    
                rows << {
              label_id: label_id,
              target_id: target_id,
              target_type: issue.issuable_type,
              created_at: time,
              updated_at: time
            }
          end
    
    module Gitlab
  module GithubImport
    # IssuableFinder can be used for caching and retrieving database IDs for
    # issuable objects such as issues and pull requests. By caching these IDs we
    # remove the need for running a lot of database queries when importing
    # GitHub projects.
    class IssuableFinder
      attr_reader :project, :object
    
              hash[:state] = hash[:state].to_sym
          hash[:assignees].map! { |u| Representation::User.from_json_hash(u) }
          hash[:author] &&= Representation::User.from_json_hash(hash[:author])
    
            a_split.each_with_index { |s, i| a_split[i] = s.to_i unless i == a_length - 1 }
        b_split.each_with_index { |s, i| b_split[i] = s.to_i unless i == b_length - 1 }
    
        def add(path, content)
      @pages[path] = content
    end
    
            css('th h3').each do |node|
          node.name = 'span'
        end
    
        def self.extensions
      ['.air']
    end
    
    Then(/^the tasks folder is created$/) do
  path = TestApp.test_app_path.join('lib/capistrano/tasks')
  expect(Dir.exist?(path)).to be true
end
    
    Given(/^a custom task to run in the event of a failure$/) do
  safely_remove_file(TestApp.shared_path.join('failed'))
  TestApp.copy_task_to_test_app('spec/support/tasks/failed.rake')
end
    
            if echo?
          $stdin.gets
        else
          $stdin.noecho(&:gets).tap { $stdout.print '\n' }
        end
      rescue Errno::EIO
        # when stdio gets closed
        return
      end