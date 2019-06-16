
        
                def collection_method
          :lfs_objects
        end
    
    module Gitlab
  module GithubImport
    module Importer
      class NotesImporter
        include ParallelScheduling
    
          def part_of_ignored_node?(node)
        ignored_nodes.map(&:loc).any? do |ignored_loc|
          if ignored_loc.expression.begin_pos > node.source_range.begin_pos
            next false
          end
    
                1.upto(3) do |i|
              next if !arguments[i] || arguments[i].hash_type?
    
      private
    
        # fpm initialization files, note the order of the following array is
    # important, try .fpm in users home directory first and then the current
    # directory
    rc_files = [ '.fpm' ]
    rc_files << File.join(ENV['HOME'], '.fpm') if ENV['HOME']
    
      private
  def input(command)
    platforms = [
      ::PleaseRun::Platform::Systemd.new('default'), # RHEL 7, Fedora 19+, Debian 8, Ubuntu 16.04
      ::PleaseRun::Platform::Upstart.new('1.5'), # Recent Ubuntus
      ::PleaseRun::Platform::Upstart.new('0.6.5'), # CentOS 6
      ::PleaseRun::Platform::Launchd.new('10.9'), # OS X
      ::PleaseRun::Platform::SYSV.new('lsb-3.1') # Ancient stuff
    ]
    pleaserun_attributes = [ 'chdir', 'user', 'group', 'umask', 'chroot', 'nice', 'limit_coredump',
                             'limit_cputime', 'limit_data', 'limit_file_size', 'limit_locked_memory',
                             'limit_open_files', 'limit_user_processes', 'limit_physical_memory', 'limit_stack_size',
                             'log_directory', 'log_file_stderr', 'log_file_stdout']
    
          File.open(File.join(builddir, 'manifests', manifest), 'w') do |f|
        logger.info('manifest: #{f.path}')
        template = template(File.join('puppet', '#{manifest}.erb'))
        ::Dir.chdir(fileroot) do
          f.puts template.result(binding)
        end
      end
    end
  end # def generate_specfile