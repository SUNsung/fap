
        
              it 'does set the exclude directories' do
        result = Fastlane::FastFile.new.parse('lane :test do
            cloc(exclude_dir: 'test1,test2,build')
          end').runner.execute(:test)
    
        # Get rid of any info 'dir' files, so they don't conflict at the link stage
    info_dir_file = @f.info + 'dir'
    if info_dir_file.file? && !@f.skip_clean?(info_dir_file)
      observe_file_removal info_dir_file
    end
    
          when :login_fail
    
    
    {	if ln =~ /;(read|write)_(handle|filename)=/
		parts = ln.split(' ')
		if (parts[0] == 'mov')
			parts2 = parts[2].split('=')
			label = parts2[0]
			label.slice!(0,1)
			old = parts2[1]
			new = addrs[label]
			#puts '%32s: %s -> %x' % [label, old, new]
			replaces << [label, old, new.to_s(16)]
		end
	end
}
    
    clsJavaCompile 	= Rjb::import('javaCompile.CompileSourceInMemory')
clsCreateJar	= Rjb::import('javaCompile.CreateJarFile')
clsFile			= Rjb::import('java.io.File')
system			= Rjb::import('java.lang.System')
#clsString	= Rjb::import('java.lang.String')
    
        @execve      = ''
    @getpeername = ''
    @accept      = ''
    @listen      = ''
    @bind        = ''
    @socket      = ''
    @connect     = ''
    @close       = ''
    @kfcntl      = ''
    
          if status.is_a? Symbol
        pod.status = Pod::CURL_ERROR_MAP.fetch(status, :unknown_error)
        pod.error = 'FederationError: #{status}'
      elsif status >= 200 && status < 300
        pod.status = :no_errors unless Pod.statuses[pod.status] == Pod.statuses[:version_failed]
      else
        pod.status = :http_failed
        pod.error = 'FederationError: HTTP status code was: #{status}'
      end
      pod.update_offline_since
    
          it 'raises an error if a person with the same GUID already exists' do
        person_data = FactoryGirl.attributes_for(:federation_person_from_webfinger).merge(guid: alice.guid)
        person = DiasporaFederation::Entities::Person.new(person_data)