        cmd = ['git tag']
    
    # for each blog URL, check if rss URL exists
matches.each do |match|
  name = match[0]
  web_url = match[1]
    
      test 'clean path with leading slash' do
    assert_equal '/Mordor', clean_path('/Mordor')
  end
    
        post '/edit/PG', :page => 'PG', :content => '바뀐 text', :message => 'ghi'
    follow_redirect!
    assert last_response.ok?
    
        def initialize(dir, existing, attempted, message = nil)
      @dir            = dir
      @existing_path  = existing
      @attempted_path = attempted
      super(message || 'Cannot write #{@dir}/#{@attempted_path}, found #{@dir}/#{@existing_path}.')
    end
  end
end
    
    package = FPM::Package::Dir.new
    
        # magic
    header[TAR_MAGIC_START..TAR_MAGIC_END] = 'ustar\0' + '00'
    
        # Populate files + checksums, then write +MANIFEST.
    pkgdata['files'] = {}
    checksums.each do |f, shasum|
      # pkg expands % URL-style escapes, so make sure to escape % as %25
      pkgdata['files']['/' + f.gsub('%', '%25')] = shasum
    end
    
        settings['prefix'] = staging_path(attributes[:prefix])
    FileUtils.mkdir_p(settings['prefix'])
    
      def output(output_path)
    output_check(output_path)
    
          # TODO(sissel): preinstall/postinstall
      # strip @prefix, since BASEDIR will set prefix via the pkginfo file
      IO.popen('pkgproto #{staging_path}/#{@prefix}=').each_line do |line|
        type, klass, path, mode, user, group = line.split
    
    # Some utility functions
module FPM::Util
  extend FFI::Library
  ffi_lib FFI::Library::LIBC
    
      if FPM::Issues::TarWriter.has_issues_with_add_symlink?
    # Backport Symlink Support to TarWriter
    # https://github.com/rubygems/rubygems/blob/4a778c9c2489745e37bcc2d0a8f12c601a9c517f/lib/rubygems/package/tar_writer.rb#L239-L253
    def add_symlink(name, target, mode)
      check_closed