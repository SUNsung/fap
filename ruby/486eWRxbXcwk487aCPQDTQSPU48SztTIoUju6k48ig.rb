
        
          if rss_url.nil?
    puts '#{name}: GETTING'
    rss_check_url = 'http://ajax.googleapis.com/ajax/services/feed/lookup?v=1.0&q=#{web_url}'
    uri = URI.parse(rss_check_url)
    response = JSON.parse(Net::HTTP.get(uri))
    rss_url = response['responseData']['url'] if response['responseData'] && response['responseData'].has_key?('url')
    
      desc 'update main and version in bower.json'
  task :generate do
    require 'bootstrap-sass'
    Dir.chdir Bootstrap.gem_path do
      spec       = JSON.parse(File.read 'bower.json')
    
        # get sha of the branch (= the latest commit)
    def get_branch_sha
      @branch_sha ||= begin
        if @branch + '\n' == %x[git rev-parse #@branch]
          @branch
        else
          cmd = 'git ls-remote #{Shellwords.escape 'https://github.com/#@repo'} #@branch'
          log cmd
          result = %x[#{cmd}]
          raise 'Could not get branch sha!' unless $?.success? && !result.empty?
          result.split(/\s+/).first
        end
      end
    end