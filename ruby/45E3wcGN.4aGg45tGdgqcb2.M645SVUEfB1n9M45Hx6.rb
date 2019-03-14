
        
        UserOption.where(user_id: -1).update_all(
  email_private_messages: false,
  email_direct: false
)
    
        Thread.pass until running
    Thread.pass while t.status and t.status != 'sleep'
    
    describe 'main#define_method' do
  before :each do
    @code = 'define_method(:boom) { :bam }'
  end