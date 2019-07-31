
        
        module Jekyll
  class StaticFile
    extend Forwardable
    
          Jekyll.logger.info 'Source:', site.source
      Jekyll.logger.info 'Destination:', site.dest
      Jekyll.logger.info 'Plugins and Cache:', site.safe ? 'disabled' : 'enabled'
      Jekyll.logger.info 'Profiling phases:', build_phases.join(', ').cyan
      Jekyll.logger.info 'Profiling...'
    
    def linkify(markdown)
  linkify_prs(markdown)
end
    
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

    
    AfterConfiguration do |config|
  f = Jekyll::Cucumber::Formatter.new(nil, $stdout, {})
    
          def self.example_code
        [
          'modify_services(
            username: 'test.account@gmail.com',
            app_identifier: 'com.someorg.app',
            services: {
              push_notification: 'on',
              associated_domains: 'off',
              wallet: :on,
              apple_pay: :off,
              data_protection: true,
              multipath: false
            })'
        ]
      end
    
              UI.message('Latest upload for live-version #{app.live_version.version} is build: #{build_nr}')
    
          def self.get(bundle_id_id: nil, includes: nil)
        return Spaceship::ConnectAPI.get_bundle_id(bundle_id_id: bundle_id_id, includes: includes).first
      end
    end
  end
end

    
          def self.all(filter: {}, includes: nil, limit: nil, sort: nil)
        resps = Spaceship::ConnectAPI.get_devices(filter: filter, includes: includes).all_pages
        return resps.map(&:to_models).flatten
      end
    end
  end
end

    
        def at_xpath(*args)
      doc.at_xpath(*args)
    end
    
              node['data-language'] = 'typescript' if node['path'].try(:ends_with?, '.ts')
          node['data-language'] = 'html' if node['path'].try(:ends_with?, '.html')
          node['data-language'] = 'css' if node['path'].try(:ends_with?, '.css')
          node['data-language'] = 'js' if node['path'].try(:ends_with?, '.js')
          node['data-language'] = 'json' if node['path'].try(:ends_with?, '.json')
          node['data-language'] = node['language'].sub(/\Ats/, 'typescript').strip if node['language']
          node['data-language'] ||= 'typescript' if node.content.start_with?('@')
    
          # Valid client connection?
      if (client)
        # Increment the has connection counter
        self.pending_connections += 1
    
    require 'msf/core/handler/reverse_tcp'
require 'msf/base/sessions/command_shell'
require 'msf/base/sessions/command_shell_options'
    
        arg = datastore['ARGV0']
    if arg
      if arg.length >= 16
        raise ArgumentError, 'The specified argv[0] must be less than 16 bytes.'
      end
      p[192, arg.length] = arg
    end
    
      # Run Method for when run command is issued
  def run
    unless is_root?
      fail_with(Failure::BadConfig, 'Insufficient Privileges: must be running as root to dump the hashes')
    end
    
    for segment in macho.segments
  #next if segment.segname == MachO::LoadCommands::SEGMENT_NAMES[:SEG_PAGEZERO]
  puts 'segment: #{segment.segname} off: #{segment.offset.to_s(16)} vmaddr: #{segment.vmaddr.to_s(16)} fileoff: #{segment.fileoff.to_s(16)}'
  for section in segment.sections
    puts 'section: #{section.sectname} off: #{section.offset.to_s(16)} addr: #{section.addr.to_s(16)} size: #{section.size.to_s(16)}'
    flat_addr = section.addr - min
    section_data = data[section.offset, section.size]
    #file_section = section.offset
    #puts 'info: #{segment.fileoff.to_s(16)} #{segment.offset.to_s(16)} #{section.size.to_s(16)} #{file_section.to_s(16)}'
    #puts '?: #{data.size.to_s(16)} #{file_section.to_s(16)}'
    if section_data
      puts 'flat_addr: #{flat_addr.to_s(16)} (#{section_data.size.to_s(16)})'
      if start == -1 or start > flat_addr
        start = flat_addr
      end
      output_data[flat_addr, section_data.size] = section_data
    end
  end
end
    
      #
  # Use a locally stored Kerberos ticket in the current session.
  #
  def cmd_kerberos_ticket_use(*args)
    if args.length != 1
      print_line('Usage: kerberos_ticket_use ticketpath')
      return
    end
    
      def initialize(info = {})
    super(update_info(info,
      'Name' => 'Windows Persistent Service Installer',
      'Description'   => %q{
        This Module will generate and upload an executable to a remote host, next will make it a persistent service.
        It will create a new service which will start the payload whenever the service is running. Admin or system
        privilege is required.
      },
      'License'       => MSF_LICENSE,
      'Author'        => [ 'Green-m <greenm.xxoo[at]gmail.com>' ],
      'Platform'      => [ 'windows' ],
      'Targets'       => [['Windows', {}]],
      'SessionTypes'  => [ 'meterpreter', 'shell'],
      'DefaultTarget'        => 0,
      'References'           => [
        [ 'URL', 'https://github.com/rapid7/metasploit-framework/blob/master/external/source/metsvc/src/metsvc.cpp' ]
      ],
      'DisclosureDate'=> 'Oct 20 2018'
    ))
    
      gem.add_development_dependency 'danger'
  gem.add_development_dependency 'mocha'
  gem.add_development_dependency 'rspec'
  gem.add_development_dependency 'rubocop', '0.48.1'
end

    
      run_vagrant_command(symlinked?(TestApp.current_path, specific_release_path))
end

    
          private
    
        def tmux_split_command
      path = if tab.root?
               '#{Tmuxinator::Config.default_path_option} #{tab.root}'
             end
      '#{project.tmux} splitw #{path} -t #{tab.tmux_window_target}'
    end
    
        def _yaml_root
      File.expand_path(yaml['root']).shellescape if yaml['root']
    end
    
      factory :nameless_window_project, class: Tmuxinator::Project do
    transient do
      file { yaml_load('spec/fixtures/nameless_window.yml') }
    end
    
    describe Tmuxinator::Pane do
  let(:klass) { described_class }
  let(:instance) { klass.new(index, project, window, *commands) }
  # let(:index) { 'vim' }
  # let(:project) { 0 }
  # let(:tab) { nil }
  # let(:commands) { nil }
  let(:index) { 0 }
  let(:project) { double }
  let(:window) { double }
  let(:commands) { ['vim', 'bash'] }
    
        desc 'completions [arg1 arg2]', COMMANDS[:completions]