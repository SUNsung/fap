
        
          def post_superenv_hacks
    # Only allow Homebrew-approved directories into the PATH, unless
    # a formula opts-in to allowing the user's path.
    if formula.env.userpaths? || reqs.any? { |rq| rq.env.userpaths? }
      ENV.userpaths!
    end
  end
    
        # Remove directories opposite from traversal, so that a subtree with no
    # actual files gets removed correctly.
    dirs.reverse_each do |d|
      if d.children.empty?
        puts 'rmdir: #{d} (empty)' if ARGV.verbose?
        d.rmdir
      end
    end
    
      def print_remaining_files(files, root, other = '')
    case files.length
    when 0
      # noop
    when 1
      puts files
    else
      puts '#{root}/ (#{files.length} #{other}files)'
    end
  end
end

    
    module Homebrew
  def update_report
    install_core_tap_if_necessary
    
      # Use this method to generate standard caveats.
  def standard_instructions(home_name, home_value = libexec)
    <<-EOS.undent
      Before you can use these tools you must export some variables to your $SHELL.
    
    desc 'Deploy website via rsync'
task :rsync do
  exclude = ''
  if File.exists?('./rsync-exclude')
    exclude = '--exclude-from '#{File.expand_path('./rsync-exclude')}''
  end
  puts '## Deploying website via Rsync'
  ok_failed system('rsync -avze 'ssh -p #{ssh_port}' #{exclude} #{rsync_args} #{'--delete' unless rsync_delete == false} #{public_dir}/ #{ssh_user}:#{document_root}')
end
    
          # Create an Atom-feed for each index.
      feed = CategoryFeed.new(self, self.source, category_dir, category)
      feed.render(self.layouts, site_payload)
      feed.write(self.dest)
      # Record the fact that this page has been added, otherwise Site::cleanup will remove it.
      self.pages << feed
    end
    
          def title
        'Comparison of #{@page.title}'
      end
    
          # http://stackoverflow.com/questions/9445760/bit-shifting-in-ruby
      def left_shift int, shift
        r = ((int & 0xFF) << (shift & 0x1F)) & 0xFFFFFFFF
        # 1>>31, 2**32
        (r & 2147483648) == 0 ? r : r - 4294967296
      end
    
      test 'retain edit information' do
    page1 = 'page1'
    user1 = 'user1'
    @wiki.write_page(page1, :markdown, '',
                     { :name => user1, :email => user1 });
    
      test 'extract destination file name in case of path renaming' do
    view = Precious::Views::LatestChanges.new
    assert_equal 'newname.md', view.extract_renamed_path_destination('oldname.md => newname.md')
    assert_equal 'newDirectoryName/fileName.md', view.extract_renamed_path_destination('{oldDirectoryName => newDirectoryName}/fileName.md')
  end
    
      teardown do
    FileUtils.rm_rf(@path)
  end
    
              @wiki.sanitizer.clean(result)
        else
          ''
        end
      end