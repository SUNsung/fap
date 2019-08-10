
        
            GLOBAL_TEMPLATE_TYPES = {
      gitignores: {
        gitlab_version: 8.8
      },
      gitlab_ci_ymls: {
        gitlab_version: 8.9
      },
      dockerfiles: {
        gitlab_version: 8.15
      }
    }.freeze
    
      subject(:finder) { described_class.new(project, 'files/', '.html', categories) }
    
    # This class finds files in a repository by name and content
# the result is joined and sorted by file name
module Gitlab
  class FileFinder
    attr_reader :project, :ref
    
      def self.ungetc(c)
    @@buf.unshift(c)
  end
    
    describe 'GzipReader#rewind' do
    
        def default
      {
      }
    end
  end
    
        it 'shows empty retries' do
      r = Sidekiq::RetrySet.new
      assert_equal 0, r.size
    end
    
        assert_equal dead_set.find_job('123123').value, serialized_job
  end
    
    describe Sidekiq::ExceptionHandler do
  describe 'with mock logger' do
    before do
      @old_logger = Sidekiq.logger
      @str_logger = StringIO.new
      Sidekiq.logger = Logger.new(@str_logger)
    end
    
      def perform
  end
end
    
    __END__